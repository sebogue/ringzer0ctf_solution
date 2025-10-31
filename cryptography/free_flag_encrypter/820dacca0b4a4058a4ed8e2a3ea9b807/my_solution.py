import json

# Votre énorme clé
key = [1049643545053845273760322020916814520864260448136963427231519308917126629601246803089516669323517653083642645734050891723, ...]  # Les 440 éléments

# Le message chiffré
c = 66402475345296791559204542589507412515168939118242415356522490904240342182600657906513477799166727873875173987351787746751

# Tester différentes longueurs de message
for msg_len in range(10, 100):
    target_bits = msg_len * 8
    if target_bits > len(key):
        break
    
    # Utiliser seulement les derniers éléments
    subset = key[-target_bits:]
    remaining = c
    bits = ''
    
    for val in reversed(subset):
        if remaining >= val:
            bits = '1' + bits
            remaining -= val
        else:
            bits = '0' + bits
    
    # Convertir en texte
    try:
        msg = ''.join(chr(int(bits[i:i+8], 2)) for i in range(0, len(bits), 8))
        if all(32 <= ord(ch) <= 126 or ch in '\n\r\t' for ch in msg):
            print(f"[Longueur {msg_len}] TROUVÉ: {msg}")
            print(f"Reste: {remaining}\n")
    except:
        pass