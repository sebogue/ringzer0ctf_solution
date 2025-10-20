import struct
import RC8_Encrypt

def build_wav_header(encrypted_wav):
    # I pour little endian et 16 pour PCM standard
    wav_header = b"RIFF" + struct.pack('<I', len(encrypted_wav) - 8) + b"WAVEfmt " + struct.pack('<I', 16) 
    return wav_header

def berlekamp_massey(sequence):
    """
    Implémentation de l'algorithme Berlekamp-Massey donné par chatgpt
    """
    n = len(sequence)
    c = [0] * n
    b = [0] * n
    c[0] = b[0] = 1
    l, m, i = 0, -1, 0
    
    while i < n:
        d = sequence[i]
        for j in range(1, l + 1):
            d ^= c[j] & sequence[i - j]
        
        if d == 1:
            t = c[:]
            for j in range(0, n - i + m):
                c[i - m + j] ^= b[j]
            if 2 * l <= i:
                l = i + 1 - l
                m = i
                b = t
        i += 1
    
    return c[:l + 1]


def extract_keystream(encrypted_wav, header):
    # On xor le plaintext (header) avec le début de encrypted_wav pour obtenir le début de clé qui lui sera passé a berlekamp massey
    prefix_key = bytearray([enc_byte ^ wav_byte for enc_byte, wav_byte in zip(encrypted_wav, header)])
    keystream_int = int.from_bytes(prefix_key, byteorder='little')
    seed = keystream_int & 0xffffffffffffffff
    return ([int(bit) for bit in bin(keystream_int)[2:].rjust(len(prefix_key) * 8, '0')[::-1]], seed)

if(__name__=="__main__"):   
    with open("transcript.wav.enc", 'rb') as f:
        encrypted_wav = bytearray(f.read())
    header = build_wav_header(encrypted_wav)

    bin_key, seed = extract_keystream(encrypted_wav, header)

    ans_found = berlekamp_massey(bin_key)[::-1]
    key = int(''.join(map(str, ans_found))[::-1], 2)

    with open("transcript.wav.enc", 'rb') as f:
        data = bytearray(f.read())

    for i,x in enumerate(RC8_Encrypt.rc8(seed, key, len(data))):
        data[i] ^= x

    with open("transcript.wav", 'wb') as f:
        f.write(data)