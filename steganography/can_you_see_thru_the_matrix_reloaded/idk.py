import numpy as np
from PIL import Image

# Les bytes suspects du header
key_bytes = bytes([0x06, 0xe8, 0x25])
print(f"Clé extraite du header: {key_bytes.hex()}")

# Répète cette clé sur toute l'image
img = np.array(Image.open('fixed_rgb.png'))
height, width, channels = img.shape
print(f"Image shape: {img.shape}")

# Crée un pattern 3D pour RGB
total_pixels = height * width * channels
key_pattern = np.tile(key_bytes, (total_pixels // len(key_bytes)) + 1)
key_pattern = key_pattern[:total_pixels].reshape(height, width, channels)

# XOR avec la clé
xor_with_key = img ^ key_pattern
Image.fromarray(xor_with_key.astype('uint8')).save('xor_with_header_key.png')
print("✓ XOR avec clé du header: xor_with_header_key.png")

# Essaie aussi avec juste 0x06 sur tous les canaux
key_06 = np.full((height, width, channels), 0x06, dtype='uint8')
xor_06 = img ^ key_06
Image.fromarray(xor_06).save('xor_with_06.png')
print("✓ XOR avec 0x06: xor_with_06.png")

# Et avec 0xe8
key_e8 = np.full((height, width, channels), 0xe8, dtype='uint8')
xor_e8 = img ^ key_e8
Image.fromarray(xor_e8).save('xor_with_e8.png')
print("✓ XOR avec 0xe8: xor_with_e8.png")

# Et avec 0x25
key_25 = np.full((height, width, channels), 0x25, dtype='uint8')
xor_25 = img ^ key_25
Image.fromarray(xor_25).save('xor_with_25.png')
print("✓ XOR avec 0x25: xor_with_25.png")

# Essaie aussi en convertissant en niveaux de gris d'abord
img_gray = np.array(Image.open('fixed_rgb.png').convert('L'))
key_pattern_gray = np.tile(key_bytes, (img_gray.size // len(key_bytes)) + 1)
key_pattern_gray = key_pattern_gray[:img_gray.size].reshape(img_gray.shape)

xor_gray = img_gray ^ key_pattern_gray
Image.fromarray(xor_gray).save('xor_gray_with_key.png')
print("✓ XOR niveaux de gris avec clé: xor_gray_with_key.png")