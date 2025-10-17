import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

hash_list = {}
for i in range(0, 9999):
    s = str(i).encode() 
    hash_list[hashlib.sha1(s).hexdigest()] = i


url = "http://challenges.ringzer0ctf.com:10056/"
html = urlopen(url).read()
soup = BeautifulSoup(html)
div = soup.find('div', class_='message')
content = div.text
content = re.sub('----- BEGIN HASH -----', '', content)
content = re.sub('----- END HASH -----', '', content)
content = content.strip()
decryptedPassword = hash_list[content]
payload = {'r': decryptedPassword}
r = requests.get(url, params=payload)
print(r.text)