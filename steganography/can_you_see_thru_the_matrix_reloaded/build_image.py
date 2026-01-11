from PIL import Image
import struct

width = 2721
height = 2170

# Charge les données brutes
with open('raw_image_data.bin', 'rb') as f:
    raw_data = f.read()

print(f"Données: {len(raw_data)} bytes")
print(f"Image: {width}x{height}")

# Calcul: pour RGBA on a besoin de width * height * 4 bytes
# PLUS 1 byte de filtre par ligne
bytes_per_line = width * 4 + 1  # +1 pour le filter byte
total_expected = bytes_per_line * height

print(f"Attendu: {total_expected} bytes ({bytes_per_line} bytes/ligne)")

# Les données PNG ont un byte de filtre au début de chaque ligne
# On doit les enlever et appliquer les filtres

def reconstruct_image(raw_data, width, height):
    bytes_per_pixel = 4  # RGBA
    stride = width * bytes_per_pixel
    
    pixels = bytearray()
    previous_line = bytearray(stride)
    
    offset = 0
    for y in range(height):
        if offset >= len(raw_data):
            break
            
        filter_type = raw_data[offset]
        offset += 1
        
        current_line = bytearray(raw_data[offset:offset+stride])
        offset += stride
        
        # Applique le filtre (simplifié - assume filter 0 = none)
        if filter_type == 0:  # None
            pass
        elif filter_type == 1:  # Sub
            for i in range(bytes_per_pixel, len(current_line)):
                current_line[i] = (current_line[i] + current_line[i - bytes_per_pixel]) % 256
        elif filter_type == 2:  # Up
            for i in range(len(current_line)):
                current_line[i] = (current_line[i] + previous_line[i]) % 256
        
        pixels.extend(current_line)
        previous_line = current_line
        
        if y % 100 == 0:
            print(f"Ligne {y}/{height}")
    
    return bytes(pixels)

print("\nReconstruction de l'image...")
pixel_data = reconstruct_image(raw_data, width, height)

print(f"Pixels reconstruits: {len(pixel_data)} bytes")

# Crée l'image
img = Image.frombytes('RGBA', (width, height), pixel_data)
img.save('reconstructed.png')
print("✓ Image sauvegardée: reconstructed.png")

# Sauvegarde aussi en RGB
img_rgb = img.convert('RGB')
img_rgb.save('reconstructed_rgb.png')
print("✓ Image RGB sauvegardée: reconstructed_rgb.png")