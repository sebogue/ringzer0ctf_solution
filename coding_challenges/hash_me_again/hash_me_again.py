import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

url = "http://challenges.ringzer0ctf.com:10014/"
html = urlopen(url).read()
soup = BeautifulSoup(html)
div = soup.find('div', class_='message')
content = div.text
content = re.sub('----- BEGIN MESSAGE -----', '', content)
content = re.sub('----- END MESSAGE -----', '', content)
content = content.strip()
s = ''.join(chr(int(content[i:i+8], 2)) for i in range(0, len(content), 8))
HashedPassword = hashlib.sha512(s.encode('utf-8')).hexdigest()
payload = {'r': HashedPassword}
r = requests.get(url, params=payload)
print(r.text)