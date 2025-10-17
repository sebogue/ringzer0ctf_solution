import pexpect

SSH_CMD = "ssh -p 10130 number@challenges.ringzer0ctf.com"
PASSWORD = "Z7IwIMRC2dc764L"

child = pexpect.spawn(SSH_CMD, encoding="utf-8", timeout=10)

# gérer fingerprint
i = child.expect([
    "Are you sure you want to continue connecting",
    "password:",
    "Password:",
    pexpect.TIMEOUT,
])
if i == 0:
    child.sendline("yes")
    child.expect(["password:", "Password:"])
    child.sendline(PASSWORD)
elif i in (1, 2):
    child.sendline(PASSWORD)

# attendre prompt initial
child.expect(["Enter your number", "number", pexpect.TIMEOUT])
print(child.before + child.after)

def send_and_get(n):
    child.sendline(str(n))
    try:
        output = child.read_nonblocking(size=4096)
        return output.strip()
    except pexpect.TIMEOUT:
        return "<no response>"

def guess_number():
    min_ = 0
    max_ = 10000
    while True:
        mid = min_+(1+max_-min_)//2
        ret = send_and_get(mid)
        print(mid)
        if(ret.find("Nah! Your number is too small") != -1):
            min_= mid
        elif(ret.find("Nah! Your number is too big") != -1):
            max_ = mid
        else:
            print(ret)
            break

if(__name__=='__main__'):
    for i in range(0,10):
        guess_number()
