import os
import re, base64, requests
import time
import subprocess

def decode_base64_loop(b64_str: str) -> bytes:
    b64_re = re.compile(r'^[A-Za-z0-9+/=]+$')
    data = b64_str
    while True:
        if isinstance(data, bytes):
            s = data.decode('latin-1')
        else:
            s = data
        clean = re.sub(r'\s+', '', s)
        if not b64_re.fullmatch(clean):
            break
        data = base64.b64decode(clean)
    return data

CHAL_URL = "http://challenges.ringzer0ctf.com:10015/"

sess = requests.Session()
t0 = time.time()
# Récupérer le contenu ELF depuis le challenge
r = sess.get(CHAL_URL, timeout=1.5)
html = r.text
html_clean = html.replace("<br />", "").replace("<br/>", "")
m = re.search(r'----- BEGIN Elf Message -----\s*(.*?)\s*----- End Elf Message -----', html_clean, re.S)
content = m.group(1).strip()
decoded_bytes = decode_base64_loop(content)
elf_bytes = decoded_bytes[::-1]

with open('output.elf', 'wb') as f:
    file = f.write(elf_bytes)

os.chmod("output.elf", 0o755)


result = subprocess.run(
    ["./output.elf"], 
    capture_output=True, 
    text=True
)

payload = {'r': result.stdout.strip()}
r = requests.get(CHAL_URL, params=payload)
print(r.text)

t1 = time.time()
print(f"{t1-t0} secondes")