import socket

# ---------- 1. Construction du code correcteur (distance >= 3, longueur 11) ----------
def hamming_dist(a, b):
    return bin(a ^ b).count("1")

def build_codewords(n_needed=101, length=11):
    codewords = []
    for candidate in range(2 ** length):
        if all(hamming_dist(candidate, c) >= 3 for c in codewords):
            codewords.append(candidate)
            if len(codewords) == n_needed:
                break
    if len(codewords) < n_needed:
        raise RuntimeError("Impossible de construire assez de mots de code")
    return codewords

LENGTH = 11
codewords = build_codewords(101, LENGTH)          # codewords[num] = code du nombre "num"

def bits(cw, length=LENGTH):
    return [(cw >> i) & 1 for i in range(length)]

# subset_for_bit[i] = ensemble des nombres dont le bit i du code vaut 1
subset_for_bit = []
for i in range(LENGTH):
    subset_for_bit.append([num for num in range(101) if bits(codewords[num])[i] == 1])

def decode(answer_bits):
    """answer_bits: liste de 11 int (0/1). Retourne le nombre décodé."""
    received = 0
    for i, b in enumerate(answer_bits):
        if b:
            received |= (1 << i)
    best_num, best_dist = None, 999
    for num in range(101):
        d = hamming_dist(received, codewords[num])
        if d < best_dist:
            best_dist = d
            best_num = num
    return best_num

# ---------- 2. Communication avec le serveur ----------
def main():
    sock = socket.create_connection(("challenges.ringzer0ctf.com", 10339))
    f = sock.makefile("rwb", buffering=0)

    def recv_line():
        line = b""
        while True:
            c = f.read(1)
            if not c:
                break
            line += c
            if line.endswith(b":") or line.endswith(b"\n"):
                break
        return line.decode(errors="ignore")

    def send_line(s):
        f.write((s + "\n").encode())

    buf = ""
    def read_until(*markers):
        nonlocal buf
        while not any(m in buf for m in markers):
            chunk = sock.recv(4096)
            if not chunk:
                break
            buf += chunk.decode(errors="ignore")
        for m in markers:
            if m in buf:
                idx = buf.index(m) + len(m)
                out, buf_rest = buf[:idx], buf[idx:]
                buf = buf_rest
                return out
        return buf

    banner = read_until("subset:")
    print(banner)

    for round_i in range(10):
        # poser les 11 questions
        for i in range(LENGTH):
            subset_str = ",".join(str(n) for n in subset_for_bit[i])
            send_line(subset_str)
            if i < LENGTH - 1:
                chunk = read_until("subset:")
            else:
                chunk = read_until("Alice answers:")
        # lire la ligne des réponses
        chunk = read_until("\n")
        bitstring = "".join(ch for ch in chunk if ch in "01")
        answer_bits = [int(c) for c in bitstring[:LENGTH]]

        guess = decode(answer_bits)
        send_line(str(guess))

        if round_i < 9:
            result = read_until("subset:")
        else:
            # dernier round : on ne sait pas exactement ce qui suit,
            # donc on lit tout ce qu'il reste jusqu'à fermeture / timeout
            result = ""

        print(f"Round {round_i+1} bits={bitstring} guess={guess} ->", result)

    # ----- récupérer TOUT ce qui reste (message final + flag) -----
    sock.settimeout(3)
    remaining = buf  # ce qu'on avait déjà bufferisé mais pas consommé
    try:
        while True:
            chunk = sock.recv(4096)
            if not chunk:
                break
            remaining += chunk.decode(errors="ignore")
    except socket.timeout:
        pass

    print("---- FIN ----")
    print(remaining)

    # récupérer le reste (flag)
    remaining = sock.recv(8192).decode(errors="ignore")
    print(remaining)

if __name__ == "__main__":
    main()