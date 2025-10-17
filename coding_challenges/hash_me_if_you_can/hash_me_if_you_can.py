import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

url = "http://challenges.ringzer0ctf.com:10013/"
html = urlopen(url).read()
soup = BeautifulSoup(html)
div = soup.find('div', class_='message')
content = div.text
content = re.sub('----- BEGIN MESSAGE -----', '', content)
content = re.sub('----- END MESSAGE -----', '', content)
content = content.strip()
HashedPassword = hashlib.sha512(content.encode('utf-8')).hexdigest()
payload = {'r': HashedPassword}
r = requests.get(url, params=payload)
print(r.text)