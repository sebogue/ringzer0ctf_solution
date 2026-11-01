def lshift(val, n):
    return (val << n) & 0xFFFFFFFFFFFFFFFF

def rshift(val, n):
    return val >> n

def decrypt_xxtea(v_encrypted, key_str):
    v = [x & 0xFFFFFFFFFFFFFFFF for x in v_encrypted]
    n = len(v)
    rounds = 6 + 52 // n
    delta = 0x9E3779B9
    sum_val = (rounds * delta) & 0xFFFFFFFF
    
    k = [ord(c) for c in key_str[:16]]
    
    while rounds > 0:
        e = (sum_val >> 2) & 3
        p = n - 1
        while p > 0:
            z = v[p - 1]
            y = v[p]
            mx = (((rshift(z, 5) ^ lshift(y, 2)) + (rshift(y, 3) ^ lshift(z, 4))) ^ ((sum_val ^ y) + (k[(p & 3) ^ e] ^ z)))
            v[p] = (v[p] - mx) & 0xFFFFFFFFFFFFFFFF
            p -= 1
        
        z = v[n - 1]
        y = v[0]
        mx = (((rshift(z, 5) ^ lshift(y, 2)) + (rshift(y, 3) ^ lshift(z, 4))) ^ ((sum_val ^ y) + (k[(p & 3) ^ e] ^ z)))
        v[0] = (v[0] - mx) & 0xFFFFFFFFFFFFFFFF
        
        sum_val = (sum_val - delta) & 0xFFFFFFFF
        rounds -= 1
        
    return v

# Tableau cible extrait du code Java (Moorievah9eiphexa7ei)
encrypted = [
    -7299950372246270130, 1976416466922597453, -406007441288188571, 3794966505803090196, 
    171090164587526747, 5792943095062570423, -7713862057487400206, 7639170558004561835, 
    3916698305826355080, -6456427991971209554, -7758834698521392158, -5730750116160705908, 
    6948223137091470730, -296327763722674795, -6901696108234225502, -80453138455535461, 
    1002507941782937203, -4226649956479707135, -1393166576116039501, 666045400447452906, 
    2133950680096602059, -8830376840081875079, -1544964621214540965, -1148258126037845750, 
    3631364090535281582, 8900840099840684986, -7283809943046997652, 6305783861272818422, 
    2514442706494648650, 5481177430400120059, 1300301082452780749, -1668739779313917377, 
    -7664180319896470874, -106000297657326668, -5269292154443141405, 4985370578289833515, 
    916230421379055513
]

key = "And I love cats!"

decrypted_codes = decrypt_xxtea(encrypted, key)

# Conversion propre des codes en caractères
password = "".join([chr(c) for c in decrypted_codes if 32 <= c <= 126])
print("Mot de passe / Flag trouvé :", password)