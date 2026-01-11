from PIL import Image
import numpy as np

# Ouvrir les images et convertir en tableau numpy
r = np.array(Image.open("r1"))
g = np.array(Image.open("g1"))
b = np.array(Image.open("b1"))

# XOR pixel par pixel
result1 = r ^ g ^ b

# Convertir en image et sauvegarder
Image.fromarray(result1).save("xor_result1.png")


r = np.array(Image.open("r2"))
g = np.array(Image.open("g2"))
b = np.array(Image.open("b2"))

# XOR pixel par pixel
result2 = r ^ g ^ b

# Convertir en image et sauvegarder
Image.fromarray(result2).save("xor_result2.png")



img1 = np.array(Image.open("xor_result1.png"))
img2 = np.array(Image.open("xor_result2.png"))

final_result = img1 & img2

Image.fromarray(final_result).save("flag.png")
