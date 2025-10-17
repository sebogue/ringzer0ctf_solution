import re, hashlib, subprocess

# Extraire la clé publique
subprocess.run(["openssl", "rsa", "-in", "private.pem", "-pubout", "-out", "public.pem"], check=True)

# Lire le bloc Base64 sans le décoder ... ça fonctionnait pas autrement
with open("public.pem") as f:
    blob = ''.join(re.findall(r'^[A-Za-z0-9+/=]+$', f.read(), re.M))

# Calcul du MD5
digest = hashlib.md5(blob.encode()).hexdigest()
print("MD5 =", digest)
print("Prefix =", digest[:4])

if digest.startswith("42f5"):
    print("=> Le md5 est celui à soumettre pour trouver le flag.")
    #42f51df8b6a2bafa824c179a38066e5d
