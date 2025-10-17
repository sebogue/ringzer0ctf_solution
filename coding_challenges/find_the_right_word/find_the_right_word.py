
import base64
import re
from urllib.request import urlopen
from bs4 import BeautifulSoup
import itertools

import requests

URL = "http://challenges.ringzer0ctf.com:10126/"

def extract_content():
    html = urlopen(URL).read()
    soup = BeautifulSoup(html, features="html.parser")
    div = soup.find_all('div', class_='message')
    words = div[0].text
    m = re.search(r'----- BEGIN WORDS -----\s*(.*?)\s*----- END WORDS -----', words, re.S)
    words = m.group(1).strip()
    return words.split(',')

def get_words():
    anagrams = {}
    dictionnary = set()
    with open('wordlist.txt', 'r') as f:
        for line in f:
            line = line.strip()
            if line.islower() and '-' not in line:
                dictionnary.add(line)
                key = "".join(sorted(line))
                anagrams.setdefault(key, []).append(line)
    return dictionnary, anagrams



if __name__ == "__main__":
    words = extract_content()
    print(words)
    dictionnary, anagrams = get_words()
    answer = []
    for word in words:
        if(word in dictionnary):
            answer.append(word)
            continue

        word_sort = "".join(sorted(word))
        if(word_sort in anagrams):
            answer.append(anagrams[word_sort][0])
    
    if(len(answer) == len(words)):
        format_answer = ",".join(answer)
        r = requests.get(URL, params={'r':format_answer})
        print(r.text)
    else:
        print("A word was not found. Try again ! (It might take 3-4 attempts)")