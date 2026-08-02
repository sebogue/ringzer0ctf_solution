enc_flag = bytes.fromhex("5445a2d166a155bbc73572a11f8e0083eac122457e486b92f6c2dbd8ca127a7581186fc93ed3")

def recurrence(seed, total_len):
    K = list(seed)
    while len(K) < total_len:
        n = len(K)
        K.append(K[n-1] ^ K[n-2] ^ K[n-3] ^ K[n-6] ^ K[n-7] ^ K[n-8])
    return bytes(K)

import itertools, string
charset = (string.ascii_letters + string.digits + "_-").encode()

prefixes = [p.encode() for p in ("flag-","FLAG-","Flag-","flag_","FLAG_","Flag_")]

best = []
for prefix in prefixes:
    n = len(prefix)
    K_known = bytes(a ^ b for a, b in zip(enc_flag[:n], prefix))
    pad = 8 - n
    for guess_plain in itertools.product(charset, repeat=pad):
        K_pad = bytes(a ^ b for a, b in zip(enc_flag[n:8], guess_plain))
        seed = K_known + K_pad
        K_full = recurrence(seed, len(enc_flag))
        flag = bytes(a ^ b for a, b in zip(enc_flag, K_full))
        score = sum(1 for c in flag if chr(c) in string.ascii_letters+string.digits+"_-")
        best.append((score, prefix, flag))

best.sort(key=lambda x: -x[0])
for score, prefix, flag in best[:15]:
    print(score, prefix, flag)