import struct
import random
import os

def padding(value, p):
    bytes_value    = hex(value)[2:].replace("L", "").decode("hex")
    nb_bytes_p     = len(hex(p)[2:].replace("L", "")) / 2 - 1
    nb_bytes_value = len(bytes_value)
    remaining = nb_bytes_p - nb_bytes_value - 5
    final = struct.pack("<I", remaining) + "\x80" + os.urandom(remaining) + bytes_value
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

def encrypt(message):
    p = 2280513704087298036129174978630412167397990271336449321695887012857651455794435561228907714517504186815308633508380902254625691575635048834723919805588012689940966596686927035214449988970671464802065489508583372289448354156410765644468800277378324120728893634726999843120468336746582066560420154260708554017200988737553008490374568229241644785934008746868639680729891184495273085159215287233707352926676078416831053798250049342110056981826678222078213380613135541408112791313388515299893632687060689581887220247707360303409951528894546307526308244833754557005419278224193391840337764065180985010348623219909334330781
    e = 4

    message = int(message.encode("hex"), 16)
    padded = padding(message, p)
    result = pow(padded, e, p)

    return hex(result)[2:].replace("L", "")

message = raw_input("Enter your message to encrypt : ")
encrypted = encrypt(message)
print("***SECRET***%s***SECRET***" % encrypted)

