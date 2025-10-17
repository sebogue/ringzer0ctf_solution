import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

url = "http://challenges.ringzer0ctf.com:10057/"
html = urlopen(url).read()
soup = BeautifulSoup(html, features="html.parser")

div = soup.find_all('div', class_='message')

hash_div = div[0].text
m = re.search(r'----- BEGIN HASH -----\s*(.*?)\s*----- END HASH -----', hash_div, re.S)
hash = m.group(1).strip()

salt_div = div[1].text
m = re.search(r'----- BEGIN SALT -----\s*(.*?)\s*----- END SALT -----', salt_div, re.S)
salt = m.group(1).strip()

result = 0
while True:
    candidate = (str(result) + salt).encode('utf-8')
    h = hashlib.sha1(candidate).hexdigest()
    if h == hash:
        break
    result += 1

payload = {'r': result}
r = requests.get(url, params=payload)
print(r.text)


