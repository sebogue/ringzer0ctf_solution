En lançant une commande strings sur l'exe, on tombe sur cette commande:
```RunProgram="launcher\bin\javaw.exe -jar chals.jar \"%%S\" \"%%T\""```

C'est un fichier SFX (self extracting), c'est une archive 7-zip modifié pour se comporter comme un exe.

Je vais extraire les fichiers java ...

```7z x i_love_tea```

On a 1 fichier jar et aussi une classe encryptée.
J'ai utilisé ce lien pour récupérer les fichiers java à partir du jar https://www.decompiler.com/jar/

On obtient un Main.java et Loader.java. Loader.java montre comment le fichier est encrypté et comment le décrypter avec sa méthode loadClass(). On peut reconstituer le fichier PasswordValidator.class

En analysant celui-ci, on comprend le lien avec le titre du challenge, le mot de passe est encrypté avec l'algorithme XXTEA.

Ca se reverse facilement, on a 37 éléments de 64 bits, 7 tours et la clé "And I love cats!"

J'ai demandé à claude de m'inverser le tout pour reconstituer le password:
```python
import hashlib
M=(1<<64)-1
T=[-7299950372246270130,1976416466922597453,-406007441288188571,3794966505803090196,171090164587526747,5792943095062570423,-7713862057487400206,7639170558004561835,3916698305826355080,-6456427991971209554,-7758834698521392158,-5730750116160705908,6948223137091470730,-296327763722674795,-6901696108234225502,-80453138455535461,1002507941782937203,-4226649956479707135,-1393166576116039501,666045400447452906,2133950680096602059,-8830376840081875079,-1544964621214540965,-1148258126037845750,3631364090535281582,8900840099840684986,-7283809943046997652,6305783861272818422,2514442706494648650,5481177430400120059,1300301082452780749,-1668739779313917377,-7664180319896470874,-106000297657326668,-5269292154443141405,4985370578289833515,916230421379055513]
v=[x&M for x in T]
n=37
k=[ord(c) for c in "And I love cats!"]+[0]*21
delta=-1640531528
rounds=6+52//n
def s32(x): 
    x&=0xFFFFFFFF
    return x-(1<<32) if x>>31 else x
def mx(z,y,s,p,e):
    sl=s&M  # sign-extended long of int sum
    A=((z>>5)^((y<<2)&M))
    B=((y>>3)^((z<<4)&M))
    C=(sl^y)
    D=(k[(p&3)^e]^z)
    return (((A+B)&M)^((C+D)&M))&M
s=s32(rounds*delta)
for _ in range(rounds):
    e=((s&0xFFFFFFFF)>>2)&3
    for p in range(n-1,-1,-1):
        z=v[(p-1)%n]; y=v[(p+1)%n]
        v[p]=(v[p]-mx(z,y,s,p,e))&M
    s=s32(s-delta)
print(v)
pw=''.join(chr(x) for x in v if x)
print(repr(pw), hashlib.md5(pw.encode()).hexdigest())
t=bytes([x&255 for x in [-31,1,-48,23,-76,-49,40,12,21,-122,102,66,120,27,-54,67]]).hex()
print(t)
```

FLAG-cad7a56a5dc20bb43a8c5c3f38726d03