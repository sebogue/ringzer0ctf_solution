#NIST Prime Curve P-521
P = 6864797660130609714981900799081393217269435300143305409394463459185543183397656052122559640661454554977296311391480858037121987999716643812574028291115057151
A = P - 3
B = 1093849038073734274511112390766805569936207598951683748994586394495953116150735016013708737573759623248592132296706313309438452531591012912142327488478985984L

def sqrt(a, p):
    return pow(a, (p + 1) / 4, p)

def egcd(a, b):
    x,y, u,v = 0,1, 1,0
    while a != 0:
        q, r = b//a, b%a
        m, n = x-u*q, y-v*q
        b,a, x,y, u,v = a,r, u,v, m,n
    gcd = b
    return gcd, x, y

def inv(a):
    gcd, x, y = egcd(a % P, P)
    if gcd != 1:
        return -1
    else:
        return x % P

def add(a, b):
    if a == 0:
        return b
    if b == 0:
        return a
    i = inv(b[0] - a[0])
    if i == -1:
        return 0
    l = ((b[1] - a[1]) * i) % P
    x = (l*l - a[0] - b[0]) % P
    y = (l*(a[0] - x) - a[1]) % P
    return (x,y)

def double(a):
    if a == 0:
        return a
    i = inv(2*a[1])
    if i == -1:
        return 0
    l = ((3*a[0]*a[0] + A) * i) % P
    x = (l*l - 2*a[0]) % P
    y = (l*(a[0] - x) - a[1]) % P
    return (x,y)

def multiply(point, exponent):
    r0 = 0
    r1 = point
    for i in bin(exponent)[2:]:
        if i == '0':
            r1 = add(r0, r1)
            r0 = double(r0)
        else:
            r0 = add(r0, r1)
            r1 = double(r1)
    return r0

def encrypt(message):
    message = int(message.encode("hex"), 16)
    x = message
    y = sqrt((message**3 + message * A + B) % P, P)
    return str(multiply((x, y), 133713371337)[0])

message = raw_input("Enter your message to encrypt : ")
encrypted = encrypt(message)
print("***SECRET***%s***SECRET***" % encrypted)