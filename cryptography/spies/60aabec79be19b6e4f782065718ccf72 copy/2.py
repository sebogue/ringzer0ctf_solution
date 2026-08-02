import struct
import random

def padding(value, N):
    bytes_value    = hex(value)[2:].replace("L", "").decode("hex")
    nb_bytes_N     = len(hex(N)[2:].replace("L", "")) / 2 - 1
    nb_bytes_value = len(bytes_value)
    remaining = nb_bytes_N - nb_bytes_value - 5
    final = struct.pack("<I", remaining) + "\x80" + remaining * "\x00" + bytes_value
    return int(final.encode("hex"), 16)

def unpad(value):
    hexa = hex(value)[2:].replace("L", "")
    if len(hexa) % 2 == 1:
        hexa = "0" + hexa
    padded = hexa.decode("hex")

    if len(padded) < 6:
        print("Unexcepted size of %d." % len(padded))
        return None

    length = struct.unpack("<I", padded[:4])[0]
    magic = padded[4]

    if magic != "\x80":
        print("Invalid padding expected 0x80 got %s" % hex(ord(magic)))
        return None

    return padded[5 + length:]

def probably_prime(n, k):
    if n < 2: return False
    for p in [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]:
        if n < p * p: return True
        if n % p == 0: return False
    r, s = 0, n - 1
    while s % 2 == 0:
        r += 1
        s //= 2
    for _ in range(k):
        a = random.randrange(2, n - 1)
        x = pow(a, s, n)
        if x == 1 or x == n - 1:
            continue
        for _ in range(r - 1):
            x = pow(x, 2, n)
            if x == n - 1:
                break
        else:
            return False
    return True

def getPrime(size):
    p = 10

    while not probably_prime(p, 50):
        p = random.randrange(1, 2**size)

    return p

def encrypt(message):
    p = getPrime(512)
    q = getPrime(512)
    N = p * q
    e = 5

    message = int(message.encode("hex"), 16)
    padded = padding(message, 2**500)
    result = pow(padded, e, N)

    return str(result) + "," + str(N)

message = raw_input("Enter your message to encrypt : ")
encrypted = encrypt(message)
print("***SECRET***%s***SECRET***" % encrypted)

