"""
Reverse du chiffrement "maison" :
    c = m_padded ^ 4  mod p       (p premier, e = 4)

Comme p est premier, on peut extraire les racines 4-iemes de c
(= 2 racines carrees successives) sans cle privee, puis reconnaitre
le bon candidat grace a la structure du padding.
"""

import struct
import os

p = 2280513704087298036129174978630412167397990271336449321695887012857651455794435561228907714517504186815308633508380902254625691575635048834723919805588012689940966596686927035214449988970671464802065489508583372289448354156410765644468800277378324120728893634726999843120468336746582066560420154260708554017200988737553008490374568229241644785934008746868639680729891184495273085159215287233707352926676078416831053798250049342110056981826678222078213380613135541408112791313388515299893632687060689581887220247707360303409951528894546307526308244833754557005419278224193391840337764065180985010348623219909334330781
e = 4


# ---------------------------------------------------------------------
# Racine carree modulaire (p premier)
# ---------------------------------------------------------------------
def modsqrt(a, p):
    """Retourne une liste des racines carrees de a mod p (0, 1 ou 2 valeurs)."""
    a %= p
    if a == 0:
        return [0]
    if pow(a, (p - 1) // 2, p) != 1:
        return []  # pas un residu quadratique -> pas de racine

    if p % 4 == 3:
        r = pow(a, (p + 1) // 4, p)
        return [r, p - r]

    # Cas general : Tonelli-Shanks
    q, s = p - 1, 0
    while q % 2 == 0:
        q //= 2
        s += 1

    z = 2
    while pow(z, (p - 1) // 2, p) != p - 1:
        z += 1

    m = s
    c = pow(z, q, p)
    t = pow(a, q, p)
    r = pow(a, (q + 1) // 2, p)

    while t != 1:
        i, t2i = 0, t
        while t2i != 1:
            t2i = pow(t2i, 2, p)
            i += 1
        b = pow(c, 1 << (m - i - 1), p)
        m = i
        c = (b * b) % p
        t = (t * c) % p
        r = (r * b) % p

    return [r, p - r]


def fourth_roots(c, p):
    """Toutes les racines 4-iemes de c mod p (jusqu'a 4 valeurs)."""
    roots = set()
    for s in modsqrt(c, p):
        for r in modsqrt(s, p):
            roots.add(r)
    return list(roots)

def unpad(value):
    hexa = hex(value)[2:]
    if len(hexa) % 2 == 1:
        hexa = "0" + hexa
    try:
        padded = bytes.fromhex(hexa)
    except ValueError:
        return None
    if len(padded) < 6:
        return None
    length = struct.unpack("<I", padded[:4])[0]
    magic = padded[4:5]
    if magic != b"\x80":
        return None
    if 5 + length > len(padded):
        return None
    message = padded[5 + length:]
    try:
        message.decode("utf-8")
    except UnicodeDecodeError:
        return None

    return message

def decrypt(hex_ciphertext):
    c = int(hex_ciphertext, 16)

    for candidate in fourth_roots(c, p):
        result = unpad(candidate)
        if result is not None:
            return result

    return None

if __name__ == "__main__":
    secret = "1dcef6ca293a446f12380829c83f41780747ae10c4b3875d26641c5547b8119fcc173c9fecb86659c1a66e0738793642b56c6511aaefee4bed033f9b223857c10d828ae4f1565578e0fb617ed0c00d4b9fcb27847a30c8b89f6b7fae202fcfa0526c27da20f3a9882de74b668549b5d6a213b2c1b824ef1777e938c699cedb9d184500934a421c7f3a61cb9e93c12ca42076baf9bb1df807df8b0bf14fc45d9716fdc988244084997fbbe7bf17ea1a0512a7295be828003cb9b04b03677f50f19ada15227e6c24057980554f5dcd8412d32565721b51359d6a17a826f9fc1ffa678abb058189e7548711b0d4afa579d4db4b5be3fcaed7e141712749d87cc53"
    msg = decrypt(secret)

    if msg is None:
        print("Aucun candidat valide trouve.")
    else:
        print("Bytes bruts   :", repr(msg))
        print("Longueur      :", len(msg))
        print("Hex brut      :", msg.hex())