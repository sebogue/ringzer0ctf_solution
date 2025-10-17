import os
from PIL import Image, ImageSequence
import cv2
import numpy as np
from itertools import combinations

import pytesseract

def extract_gif_frames(gif_path):
    img = Image.open(gif_path)
    frames = [frame.convert('RGB') for frame in ImageSequence.Iterator(img)]
    return [np.array(f) for f in frames]

def xor_pairwise(frames, output_dir="combination_xor"):
    os.makedirs(output_dir, exist_ok=True)
    for (i, j) in combinations(range(len(frames)), 2):
        result = cv2.bitwise_xor(frames[i], frames[j])
        out_path = os.path.join(output_dir, f"xor_{i}_{j}.png")
        cv2.imwrite(out_path, result.astype(np.uint8))

def detect_text_in_folder(folder_path, min_chars=3):
    results = []
    for filename in os.listdir(folder_path):
        if not filename.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp')):
            continue

        path = os.path.join(folder_path, filename)
        image = cv2.imread(path)

        if image is None:
            continue

        text = pytesseract.image_to_string(image)
        cleaned = ''.join(ch for ch in text if ch.isalnum())

        if len(cleaned) >= min_chars:
            results.append((filename, text.strip()))

    return results
if __name__ == "__main__":
    gif_file = "tv.gif"
    frames = extract_gif_frames(gif_file)
    xor_pairwise(frames)
    found = detect_text_in_folder('combination_xor')

    print("Images contenant du texte détecté :")
    for fname, txt in found:
        print(f"- {fname}: {txt}")
