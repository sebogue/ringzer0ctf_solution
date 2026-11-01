Décompilation avec Hex Rays

```c
int __cdecl sub_4014A0(const char *a1, char *a2)
{
  int result; // eax
  char *v3; // esi
  char *v4; // eax

  if ( strcmp(a1, "RingZer0") == 0 )
  {
    result = 0;
    if ( ~(strlen(a2) + 1) != -17 )
      return result;
    while ( (unsigned __int8)(a2[result] - 48) <= 9u )
    {
      if ( ++result == 15 )
      {
        v3 = sub_401334(a1);
        v4 = sub_401450(a2);
        if ( *v4 == v3[1] && v4[1] == v3[5] && v4[2] == v3[8] && v4[3] == v3[14] )
          return v4[4] == v3[17];
        return 0;
      }
    }
  }
  return 0;
}
```
On veut entrer dans le Authentication succesful.

Je vois que les fonctions sub_401334 et sub_401450 sont appelés.

sub_401334 semble être un peu compliqué puis j'ai demandé à un AI de me guider, il m'a dit qu'il s'agissait d'un RIPEMD-160.

C'est une fonction hash. Dans notre cas elle prend l'username RingZer0 comme input. Soit ea9831d97f97e1117862850562350f21b8158014 sous son format hashé.

L'autre fonction sub_401450 prend 15 bytes en parametre
puis retourne byte_407020
```c
char *__cdecl sub_401450(_BYTE *a1)
{
  int i; // ecx

  for ( i = 0; i != 5; ++i )
  {
    byte_407020[i] = 96 - a1[1] - 70 * (*a1 - 48) + 13 * (a1[2] - 48);
    a1 += 3;
  }
  return byte_407020;
}
```
byte_407020[0] = 96 - a1[1]  - 70*(a1[0]  - 48) + 13*(a1[2]  - 48); 
byte_407020[1] = 96 - a1[4]  - 70*(a1[3]  - 48) + 13*(a1[5]  - 48);
byte_407020[2] = 96 - a1[7]  - 70*(a1[6]  - 48) + 13*(a1[8]  - 48);
byte_407020[3] = 96 - a1[10] - 70*(a1[9]  - 48) + 13*(a1[11] - 48);
byte_407020[4] = 96 - a1[13] - 70*(a1[12] - 48) + 13*(a1[14] - 48);

index : 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19
valeur: ea 98 31 d9 7f 97 e1 11 78 62 85 05 62 35 0f 21 b8 15 80 14
au finale on compare:
byte_407020[0] == v3[1]   →  byte_407020[0] == 0x98   // 152
byte_407020[1] == v3[5]   →  byte_407020[1] == 0x97   // 151
byte_407020[2] == v3[8]   →  byte_407020[2] == 0x78   // 120
byte_407020[3] == v3[14]  →  byte_407020[3] == 0x0F   // 15
byte_407020[4] == v3[17]  →  byte_407020[4] == 0x15

Si on résou l'équiation, on a cette solution (il en existe d'autre)
008018066123194

Si j'entre RingZer0 et 008018066123194 comme code, j'obtiens un message de succès 

FLAG-l229IJmHvpoA4ax03u37685U8J