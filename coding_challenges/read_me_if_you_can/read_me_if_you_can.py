import re, base64, requests, time, cv2, numpy as np, pytesseract

sess = requests.Session()

def fetch_base64_image(url):
    html = sess.get(url, timeout=1.5).text
    m = re.search(r'data:image/[^;]+;base64,([^"\']+)', html)
    return base64.b64decode(m.group(1))

def decode_image(img_bytes):
    arr = np.frombuffer(img_bytes, np.uint8)
    return cv2.imdecode(arr, cv2.IMREAD_COLOR)

def preprocess(img):
    mask = np.all(img == 255, axis=2).astype(np.uint8) * 255
    if mask.sum() == 0:
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        _, mask = cv2.threshold(gray, 250, 255, cv2.THRESH_BINARY)
    
    coords = cv2.findNonZero(mask)
    x, y, w, h = cv2.boundingRect(coords)
    cropped = mask[y-10:y+h+10, x-10:x+w+10]

    resized = cv2.resize(cropped, None, fx=2, fy=2, interpolation=cv2.INTER_LINEAR)

    # léger nettoyage morphologique pour relier pixels proches
    kernel = np.ones((2,2), np.uint8)
    cleaned = cv2.morphologyEx(resized, cv2.MORPH_CLOSE, kernel)

    # sauvegarde optionnelle pour debug
    cv2.imwrite("mask_processed.png", cleaned)

    return cleaned

def solve_captcha(mask):
    config = r'--psm 7 -c tessedit_char_whitelist=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789'
    return pytesseract.image_to_string(mask, config=config).strip()

def solve(url):
    t0 = time.time()
    img_bytes = fetch_base64_image(url)
    img = decode_image(img_bytes)
    mask = preprocess(img)
    text = solve_captcha(mask)
    print(f"[{time.time()-t0:.2f}s] Captcha: {text}")
    return text

if __name__ == "__main__":
    url = "http://challenges.ringzer0ctf.com:10017/"
    ans = solve(url)
    print(sess.get(url, params={'r': ans}).text)
