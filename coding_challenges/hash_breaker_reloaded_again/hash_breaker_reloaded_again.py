import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

def lookup_simple(hash_hex, bucket_dir="./buckets"):
    hash_hex = hash_hex.strip().lower()
    bucket = hash_hex[:4]
    expected = hash_hex[4:]
    path = f"{bucket_dir}/{bucket}"
    try:
        with open(path, "r", encoding="ascii", errors="ignore") as f:
            for line in f:
                line = line.rstrip("\n")
                if len(line) < 36: 
                    continue
                if line[:36] == expected:
                    return line[36:]   # the 6-char plaintext
    except FileNotFoundError:
        return None
    return None

if __name__ == "__main__":
    url = "http://challenges.ringzer0ctf.com:10159/"
    text = None
    while(text==None):
        html = urlopen(url).read()
        soup = BeautifulSoup(html, features="html.parser")

        div = soup.find_all('div', class_='message')

        hash_div = div[0].text
        m = re.search(r'----- BEGIN HASH -----\s*(.*?)\s*----- END HASH -----', hash_div, re.S)
        hash = m.group(1).strip()
        print(hash)
        text = lookup_simple(hash)
    r = requests.get(url, params={'r':text})
    print(r.text)