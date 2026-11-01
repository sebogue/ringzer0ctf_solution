data = [
    0x485e2beb, 0xc180c931, 0x13368022, 0xe2c6ff48,
    0xee8348f8, 0xc0314822, 0x894801b0, 0xfa8948c7,
    0x23c28348, 0x3148050f, 0xf3cb0c0, 0xffd0e805,
    0x60cffff, 0xf670d0b, 0x30071e23, 0x3a05203f,
    0x9133d04, 0x3c382f2f, 0x250c071b, 0x27227a2e,
    0xa090210
]
raw_bytes = bytearray()
for value in data:
    raw_bytes.extend(value.to_bytes(4, byteorder='little'))
flag_length = 0x22
encrypted_payload = raw_bytes[-flag_length:]
decrypted_message = "".join(chr(b ^ 0x4a) for b in encrypted_payload)
print(f"Message caché : {decrypted_message}")