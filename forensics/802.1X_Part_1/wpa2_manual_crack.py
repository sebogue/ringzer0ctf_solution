import hashlib, hmac as hmac_lib

def decrypt_mppe(enc, salt, secret, auth):
    prev = auth + salt
    result = b''
    for i in range(0, len(enc), 16):
        block = enc[i:i+16]
        pad_block = block + b'\x00' * (16 - len(block)) if len(block) < 16 else block
        digest = hashlib.md5(secret.encode() + prev).digest()
        dec = bytes(a ^ b for a, b in zip(digest, pad_block))
        result += dec
        prev = enc[i:i+16]
        if len(prev) < 16:
            prev = prev + b'\x00' * (16 - len(prev))
    return result

def prf512(key, a, b):
    result = b''
    for i in range(4):
        hmac_input = a + b'\x00' + b + bytes([i])
        result += hmac_lib.new(key, hmac_input, hashlib.sha1).digest()
    return result[:64]

def calc_mic_sha1(pmk, anonce, snonce, aa, sa, eapol_data):
    aa_sa_min = min(aa, sa)
    aa_sa_max = max(aa, sa)
    nonce_min = min(anonce, snonce)
    nonce_max = max(anonce, snonce)
    b = aa_sa_min + aa_sa_max + nonce_min + nonce_max
    ptk = prf512(pmk, b"Pairwise key expansion", b)
    kck = ptk[:16]
    mic = hmac_lib.new(kck, eapol_data, hashlib.sha1).digest()[:16]
    return mic, kck, ptk

vsa_311_raw1 = bytes.fromhex('1134c7d3e180743f58ffd444e875b511b6a0e2198e312cfc235812a882b4b9e036a359e5aa1e6d6b93309a1a757990bfa9858084')
salt1 = vsa_311_raw1[2:4]
enc1 = vsa_311_raw1[4:]

acc_authenticator = bytes.fromhex('86001b4a04bfdd2b234154c84798d478')

anonce = bytes.fromhex('2a64108836acfd7e60591d27456a82753568e2b83d09bf8cd2e6588b8222b9da')
snonce = bytes.fromhex('a80162851db8432564ef0a1846a24e1fb313eb9a9ab9f24c03e5f7b39a592ded')
ap_mac = bytes.fromhex('000b867e2169')
sta_mac = bytes.fromhex('100ba96b6198')
mic_expected = bytes.fromhex('e007909ac91201927bf26b07b27c9544')

eapol_hex = '0103007702010a00000000000000000001a80162851db8432564ef0a1846a24e1fb313eb9a9ab9f24c03e5f7b39a592ded0000000000000000000000000000000000000000000000000000000000000000e007909ac91201927bf26b07b27c9544001830160100000fac040100000fac040100000fac013c000000'
eapol_bytes = bytes.fromhex(eapol_hex)
eapol_zeroed = bytearray(eapol_bytes)
for i in range(16):
    eapol_zeroed[4+77+i] = 0

new_candidates = [
    'ggermain', 'GGERMAIN', 'germain',
    'ggermain123', 'germain123',
    'final', 'chal1', 'chal', 'challenge',
    'noradius', 'no-radius', 'final-no-radius',
    'Desktop', 'Users',
    'ctf-wifi', 'wifi-ctf', 'WifiCTF',
    'nps', 'freeradius', 'microsoft',
    'Hello', 'hello', 'World', 'world',
    'Scooby', 'scooby',
    '00:0b:86:7e:21:69',  # AP MAC
    '000b867e2169',
    'test', 'Test', 'TEST',
    'wpa2', 'WPA2', 'enterprise', 'Enterprise',
    'eduroam', 'EDUROAM',
]

print("Testing new candidates:")
found = False
for secret in new_candidates:
    dec = decrypt_mppe(enc1, salt1, secret, acc_authenticator)
    key_len = dec[0]
    if key_len == 32:
        pmk = dec[1:33]
        mic_computed, kck, ptk = calc_mic_sha1(pmk, anonce, snonce, ap_mac, sta_mac, bytes(eapol_zeroed))
        if mic_computed == mic_expected:
            print(f"\n✓✓✓ SECRET FOUND: '{secret}'")
            print(f"PMK: {pmk.hex()}")
            found = True
            break
    print(f"  '{secret}': key_len={key_len}")

if not found:
    # Also show which ones produce key_len==32
    print("\nOnes with key_len==32:")
    for secret in new_candidates:
        dec = decrypt_mppe(enc1, salt1, secret, acc_authenticator)
        if dec[0] == 32:
            print(f"  '{secret}': PMK={dec[1:33].hex()}")
