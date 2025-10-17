CIPHER = "TQSBAODTTABMRUHDKNVUORAKATOZLFBFDWPHQLANSZIKOSEDESXZLDYEUBJRROAVZRBSLWESCEGGOCEMLFMAHAYSRNMCXATHGNZQBCLSCEMKIVELCRXCJTBBTXGBRNDQTLJMLUOEQWTHWVBAZHAABXPZELKBNWSNCZLNSBELFFKDLVFWOWNDQWMLFXEQWAQOQRIAAVSXAADYEUUAMTHYLSCVILMNE"

def get_words():
    words = []
    with open('wordlist.txt', 'r') as f:
        line = f.readline().strip()
        while(line):
            if(line.isalpha()):
                words.append(line.upper())
            line = f.readline().strip()
    return words

def shuffle_key(word):
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    key = alphabet
    for letter in word:
        idx = key.find(letter)
        key = key[idx+1:] + letter + key[:idx]
    return key

def find_cipher(word):
    regular_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    key = shuffle_key(word)
    plaintext = ""

    for letter in CIPHER:
        if letter in key:
            index = key.find(letter)
            plaintext_char = regular_alphabet[index]
            plaintext += plaintext_char
            index = key.find(plaintext_char)
            key = key[index+1:] + plaintext_char + key[:index]

    return plaintext


if(__name__=='__main__'):
    words = get_words()
    for word in words:
        plaintext = find_cipher(word)
        idx = plaintext.find("FLAGHYPHEN")
        if(idx!=-1):
            print(f"{word} : {plaintext[idx:]}")
            break
        


