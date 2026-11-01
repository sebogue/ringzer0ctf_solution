Avec la décompilation dewolf:
```c
extern const unsigned char __rdata_403024[0x1e] = "\xD1\xAC\xAA\xE7\x95\xB1\xDE\xA9\xB3\xD4\xF5\xD2\xA1\xAD\x9F\xEB\xF2\xD9\xA4\xD4\xDC\xD1\xD0\xD6\xA5\x92\xDC\xE3\x8B\x00";
extern const unsigned char data_403059[0x7] = "\x97\xE0\xEB\xA0\xB8\xE1\x00";
```

Avec Hex-Rays
```c
size_t __cdecl show_flag(char *Str)
{
  size_t result; // eax
  char v2[30]; // [esp+1Ah] [ebp-3Eh] BYREF
  unsigned int v3; // [esp+38h] [ebp-20h]
  int v4; // [esp+3Ch] [ebp-1Ch]
  qmemcpy(v2, &unk_403024, sizeof(v2));
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    result = strlen(v2);
    if ( v3 >= result )
      break;
    putchar(v2[v3] ^ (unsigned __int8)Str[v4++]);
    if ( v4 == strlen(Str) )
      v4 = 0;
    ++v3;
  }
  return result;
}
```
c'est donc un XOR de data_403059 sur __rdata_403024

Un script python pour trouver le flag:
```python
rdata = [
    0xD1, 0xAC, 0xAA, 0xE7, 0x95, 0xB1, 0xDE, 0xA9, 0xB3, 0xD4, 0xF5, 0xD2, 
    0xA1, 0xAD, 0x9F, 0xEB, 0xF2, 0xD9, 0xA4, 0xD4, 0xDC, 0xD1, 0xD0, 0xD6, 
    0xA5, 0x92, 0xDC, 0xE3, 0x8B
]
key = [0x97, 0xE0, 0xEB, 0xA0, 0xB8, 0xE1]
flag = "".join(chr(rdata[i] ^ key[i % len(key)]) for i in range(len(rdata)))
print(flag)
```

FLAG-PIIXtM36MtKJ8347qh72r7C3