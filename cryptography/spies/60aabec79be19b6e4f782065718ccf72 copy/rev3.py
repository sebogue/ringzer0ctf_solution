#!/usr/bin/env python3
"""
Reverse du "chiffrement" EC :
    x = message (encode directement comme coordonnee x)
    y = sqrt(x^3 + A*x + B) mod P
    Q = k * (x, y)          avec k = 133713371337 (PUBLIC, fixe)
    ciphertext = Qx (seule la coordonnee x de Q est envoyee)

Comme k est connu et public, il suffit de calculer k^-1 mod n
(n = ordre du groupe de points de la courbe, constante NIST connue)
puis de faire M = k^-1 * Q pour retrouver le point d'origine (x, y).
La coordonnee x de M est directement le message.
"""

# --- Parametres de la courbe (identiques au script d'origine) --------
P = 6864797660130609714981900799081393217269435300143305409394463459185543183397656052122559640661454554977296311391480858037121987999716643812574028291115057151
A = P - 3
B = 1093849038073734274511112390766805569936207598951683748994586394495953116150735016013708737573759623248592132296706313309438452531591012912142327488478985984

# Ordre du groupe de points de NIST P-521 (constante PUBLIQUE standard, pas un secret)
N_ORDER = 6864797660130609714981900799081393217269435300143305409394463459185543183397655394245057746333217197532963996371363321113864768612440380340372808892707005449

K = 133713371337


def sqrt(a, p):
    return pow(a, (p + 1) // 4, p)


def inv(a, m):
    return pow(a, -1, m)


def add(a, b):
    if a == 0:
        return b
    if b == 0:
        return a
    if a[0] == b[0]:
        # a == b -> doubling ; a == -b -> point a l'infini
        if (a[1] + b[1]) % P == 0:
            return 0
        return double(a)
    i = inv(b[0] - a[0], P)
    l = ((b[1] - a[1]) * i) % P
    x = (l * l - a[0] - b[0]) % P
    y = (l * (a[0] - x) - a[1]) % P
    return (x, y)


def double(a):
    if a == 0:
        return a
    i = inv(2 * a[1], P)
    l = ((3 * a[0] * a[0] + A) * i) % P
    x = (l * l - 2 * a[0]) % P
    y = (l * (a[0] - x) - a[1]) % P
    return (x, y)


def multiply(point, exponent):
    """Double-and-add classique (methode robuste, MSB en premier)."""
    result = 0
    addend = point
    for bit in bin(exponent)[2:]:
        result = double(result)
        if bit == '1':
            result = add(result, addend)
    return result


def curve_y(x):
    return sqrt((x ** 3 + A * x + B) % P, P)


def decrypt(qx_str):
    qx = int(qx_str)
    qy = curve_y(qx)
    Q = (qx, qy)

    k_inv = inv(K, N_ORDER)
    M = multiply(Q, k_inv)

    message_int = M[0]
    hexa = hex(message_int)[2:]
    if len(hexa) % 2 == 1:
        hexa = "0" + hexa

    return bytes.fromhex(hexa)


if __name__ == "__main__":
    ciphertext = "109802593760376797078397719037201661171843789090488919320103302994370377678858966602546384026308033276548848568013138867747564859004070954507570853295145936"

    msg = decrypt(ciphertext)
    print("Bytes bruts   :", repr(msg))
    print("Longueur      :", len(msg))
    print("Hex brut      :", msg.hex())

    # Verification : on re-chiffre le message trouve et on compare
    x = int(msg.hex(), 16)
    y = curve_y(x)
    check = multiply((x, y), K)
    print("Verification (doit correspondre au ciphertext d'origine) :", check[0] == int(ciphertext))