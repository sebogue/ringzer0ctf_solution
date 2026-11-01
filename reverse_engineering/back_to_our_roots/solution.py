raw_bytes = [
    ord('h'), ord('/'), ord('.'), ord(')'), ord('K'), ord('@'),
    0x05, ord(')'), 0x04, 0x17, 0x1f, 0x07, 0x1c, 0x09, ord('T'),
    ord('`'), 0x22, 0x22, ord('('), 0x02, ord('a'), ord('R'),
    0x0b, 0x01, 0x15, ord('['), ord('+'), 0x1f, 0x1b
]

key = b".conf"
flag = ""
for i, b in enumerate(raw_bytes):
    k = key[i % len(key)]
    flag += chr(b ^ k)

print(f"Length: {len(raw_bytes)}")
print(f"Flag: {flag}")