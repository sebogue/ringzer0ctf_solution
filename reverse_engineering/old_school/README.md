strings OldSchool.exe m'affiche des infos intéressantes sur les premières lignes. 

UPX, qui permet de compresser des exécutables sans pertes.

```upx -d OldSchool.exe -o decompressed.exe```

L'exécutable lorsque lancé, génère un fichier .bat dans ```Users\<nom>\AppData\local\temp\A88B.tmp```.

```python
import re
raw=open('A957.bat','rb').read().decode('latin1').replace('\r\n','\n').split('\n')
real={a*2 for a in 'abcdefghijklmnpqrstuvwxyz'}|{'binary','result','pass','length','out'}
def strip(l): return re.sub(r'%([A-Za-z]{2,9})%',lambda m:m.group(0) if m.group(1).lower() in real else '',l)
for i,l in enumerate(raw[:345]):
    s=strip(l).strip()
    if not s or s.startswith(':') or s.lower().startswith('goto'): continue
    if re.match(r'^set\s+\S+=\s*$',s,re.I): continue
    print(i,''.join(c if ord(c)<128 else '?' for c in s)[:160])
print('---tail')
for i,l in enumerate(raw[3990:4120],3990):
    s=strip(l).strip()
    if not s or s.startswith(':') or s.lower().startswith('goto'): continue
    if re.match(r'^set\s+\S+=\s*$',s,re.I): continue
    print(i,''.join(c if ord(c)<128 else '?' for c in s)[:160])
```

FLAG-%F1%%F2%%F3%%F4%27%pass%02%F5%%F6%%F7%%F8%
Avec F1 à F4 = BXVZ, pass = 5DE31B3D0C et F5 à F8 = 54J5

FLAG-BXVZ275DE31B3D0C0254J5