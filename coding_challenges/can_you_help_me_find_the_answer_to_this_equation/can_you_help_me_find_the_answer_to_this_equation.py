import hashlib
import re
from urllib.request import urlopen

import requests
from bs4 import BeautifulSoup

url = "http://challenges.ringzer0ctf.com:10032/"
html = urlopen(url).read()
soup = BeautifulSoup(html)
div = soup.find('div', class_='message')
content = div.text
content = re.sub('----- BEGIN MESSAGE -----', '', content)
content = re.sub('----- END MESSAGE -----', '', content)
content = content.strip()
numbers = content.split()
ans = int(numbers[0])+int(numbers[2],0)-int(numbers[4], 2)
payload = {'r': ans}
r = requests.get(url, params=payload)
print(r.text)