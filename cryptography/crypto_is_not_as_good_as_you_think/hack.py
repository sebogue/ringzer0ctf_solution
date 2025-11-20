import requests
import base64
from urllib.parse import urlparse, parse_qs
import time

URL = "http://challenges.ringzer0ctf.com:10105/"

# 1. Récupère le token
print("Récupération du token...")
r = requests.get(URL)
token = parse_qs(urlparse(r.url).query)['token'][0]
print(f"Token : {token}")

# 2. Décode le ciphertext
ciphertext = base64.b64decode(token)

# 3. On devine le plaintext (format : "user=anonymous|ts=XXXXXXXXXX")
# Le timestamp est time() + 10, essayons plusieurs valeurs
current_time = int(time.time())

for offset in range(-5, 15):  # Essaye autour du timestamp actuel
    ts = current_time + offset
    plaintext = f"user=anonymous|ts={ts}".encode()
    
    # Si le plaintext est plus court que le ciphertext, on a le bon
    if len(plaintext) <= len(ciphertext):
        # Extrait le keystream
        keystream = bytes(c ^ p for c, p in zip(ciphertext, plaintext))
        
        # Forge le nouveau message
        new_plaintext = f"user=admin|ts=9999999999".encode()
        new_ciphertext = bytes(k ^ p for k, p in zip(keystream, new_plaintext))
        new_token = base64.b64encode(new_ciphertext).decode()
        
        # Test
        r = requests.get(f"{URL}?token={new_token}")
        
        if "FLAG-" in r.text:
            import re
            flag = re.search(r'FLAG-[A-Za-z0-9]+', r.text).group()
            print(f"TROUVÉ avec ts={ts} : {flag}")
            break
        elif "admin" in r.text.lower() or "great" in r.text.lower():
            print(f"Succès avec ts={ts} !")
            print(r.text[:500])
            break
else:
    print("Aucun timestamp ne fonctionne")