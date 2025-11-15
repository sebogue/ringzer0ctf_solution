import base64

arr = []
with open("unreachable_packet.txt", 'r') as f:
    for line in f:
        arr.append(line.strip())

answer = ""
for val in arr:
    hex_bytes = bytes.fromhex(val)
    output = base64.b64decode(hex_bytes)
    print(output)
    answer += output.decode(errors="ignore")

print(answer)
