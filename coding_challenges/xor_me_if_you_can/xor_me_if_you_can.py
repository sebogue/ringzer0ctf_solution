
import base64
import re
from urllib.request import urlopen
from bs4 import BeautifulSoup
import itertools

import requests

URL = "http://challenges.ringzer0ctf.com:10016/"

def extract_content():
    html = urlopen(URL).read()
    soup = BeautifulSoup(html, features="html.parser")
    div = soup.find_all('div', class_='message')
    key_str = div[0].text
    m = re.search(r'----- BEGIN XOR KEY -----\s*(.*?)\s*----- END XOR KEY -----', key_str, re.S)
    key_str = m.group(1).strip()

    crypted_msg = div[1].text
    m = re.search(r'----- BEGIN CRYPTED MESSAGE -----\s*(.*?)\s*----- END CRYPTED MESSAGE -----', crypted_msg, re.S)
    crypted_msg = m.group(1).strip()
    return key_str, base64.b64decode(crypted_msg) # dis dans le problème que le message est en base64

def find_key(key_str, crypted_msg):
    KEY_SIZE = 10
    for i in range(0, len(key_str)-KEY_SIZE+1):
        current_key = key_str[i:i+KEY_SIZE].encode("utf-8")

        res = list()

        for index, char in enumerate(crypted_msg):
            res.append(chr(char ^ current_key[index % KEY_SIZE]))

        res = ''.join(res)

        if res.isalnum():
            return res
    return None



if __name__ == "__main__":
    key_str, crypted_msg = extract_content()
    ans = find_key(key_str, crypted_msg)
    r = requests.get(URL, params={'r':ans})
    print(r.text)

    