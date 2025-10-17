import re, requests, time

# Attention les espaces \n compte dans les clés il ne faut pas toucher
# les digits sont que de 0 à 5
DIGITS = {
    """\
 xxx 
x   x
x   x
x   x
 xxx 
""":'0', 

    """\
 xx  
x x  
  x  
  x  
xxxxx
""":'1', 

    """\
 xxx 
x   x 
  xx 
 x   
xxxxx
""":'2', 

    """\
 xxx 
x   x
  xx 
x   x
 xxx 
""":'3', 

    """\
 x   x
x    x
 xxxxx
     x
    x
""":'4', 

    """\
xxxxx
x    
 xxxx
    x
xxxxx
""":'5'
}

sess = requests.Session()

def fetch_ascii_blocks(url):
    r = sess.get(url)
    html = re.sub(r'<(?!br\s*/?)[^>]+>', '', r.text)
    html = html.replace('&nbsp;', ' ')
    m = re.search(r'----- BEGIN MESSAGE -----(.*?)----- END MESSAGE -----', html, re.S)
    if not m:
        raise RuntimeError("Message non trouvé.")
    content = m.group(1)
    content = content.replace('<br />', '\n').replace('<br>', '\n')
    content = re.sub(r'<br\s*/?>', '\n', content)
    content = content.replace('&nbsp;', ' ')
    with open('content.txt', 'w') as f:
        f.write(content)
    
def find_digits():
    sequence = ""
    with open("content.txt", "r", encoding="utf-8") as f:
        i = 0
        currentDigit = ""
        for line in f:
            if(line.find('x')==-1):
                continue
            currentDigit += line
            i+=1
            if(i==5): # last line of x for a digit
                i=0
                if(len(currentDigit) > 0):
                    # what is my digit compare currentDigit with a table
                    sequence += DIGITS[currentDigit]
                    currentDigit = ""
                

        return sequence


def solve(url):
    fetch_ascii_blocks(url)
    sequence = find_digits()
    return sequence
    

if __name__ == "__main__":
    url = "http://challenges.ringzer0ctf.com:10119/"
    sequence = solve(url)
    r = requests.get(url, params={'r':sequence})
    print(r.text)
