
from pathlib import Path

path = Path("space-invaders")
data = bytearray(path.read_bytes())

# Section .text : offset de début et de fin
start = 0x0DA0
end = 0x3324

# Clé XOR répétée
key = [0xD8, 0x27]

for i in range(start, end):
    data[i] ^= key[(i - start) % len(key)]

Path("space-invaders.dec").write_bytes(data)

print("Section .text déchiffrée dans space-invaders.dec")
