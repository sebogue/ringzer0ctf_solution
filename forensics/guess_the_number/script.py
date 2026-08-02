import socket

def hamming(a, b):
    return bin(a ^ b).count("1")

# Generate codes
codes = []
for x in range(2048):
    if all(hamming(x, c) >= 3 for c in codes):
        codes.append(x)
    if len(codes) == 101:
        break

# mapping number -> code
mapping = {i: codes[i] for i in range(101)}

def build_subset(bit):
    return ",".join(str(i) for i in range(101) if (mapping[i] >> bit) & 1)

# connect
s = socket.create_connection(("challenges.ringzer0ctf.com", 10339))

for round in range(10):
    subsets = [build_subset(i) for i in range(11)]

    for sub in subsets:
        s.recv(1024)
        s.sendall((sub + "\n").encode())

    data = s.recv(1024).decode()
    answers = data.split(":")[1].strip()

    ans_val = int(answers, 2)

    best = None
    best_dist = 999

    for num, code in mapping.items():
        d = hamming(ans_val, code)
        if d < best_dist:
            best_dist = d
            best = num

    s.sendall((str(best) + "\n").encode())

print(s.recv(4096).decode())