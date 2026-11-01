J'ai utilisé un convertisseur de wasm vers un langage lisible pour l'humain sur app.edgetools.io

J'ai obtenu ceci:

```pseudo
import memory env_memory;

import global env_STACKTOP:int;
global g_b:int = env_STACKTOP;

data d_admin(offset: 1024) =
  "\b9\b3\be\b8\d2\cf\c8\bd\cf\cf\b9\bd\c8\c7\ba\c9\bb\bd\ca\cb\cf\c8\cd\ba"
  "\ba\b9\cc\cb\bd\c6\cf\ca\ce\b9\be\cb\ca\00admin";

function f_a(a:byte_ptr, b:byte_ptr):int { // func0
  var d:int;
  var c:int = a[0];
  if (eqz(c) | c != (d = b[0])) {
    a = d;
    b = c;
  } else {
    loop L_b {
      a = a + 1;
      c = a[0];
      if (eqz(c) | c != (d = (b = b + 1)[0])) {
        a = d;
        b = c;
      } else {
        continue L_b
      }
    }
  }
  return (b & 255) - (a & 255);
}

export function authenticate(a:int, b:int):int { // func1
  f_c(b, -1);
  return if (f_a(a, 1062)) { 0 } else { eqz(f_a(b, 1024)) }
}

function f_c(a:byte_ptr, b:int) { // func2
  var c:int = a[0];
  if (c) {
    loop L_b {
      a[0] = c ^ b;
      a = a + 1;
      c = a[0];
      if (c) continue L_b;
    }
  }
}

export function stackRestore(a:int) { // func3
  g_b = a
}

export function stackSave():int { // func4
  return g_b
}

export function stackAlloc(a:int):int { // func5
  var b:int = g_b;
  g_b = g_b + a;
  g_b = g_b + 15 & -16;
  return b;
}
```
f_a est un strcmp.
f_c est un chiffrement XOR.

```python
cipher = [0xb9, 0xb3, 0xbe, 0xb8, 0xd2, 0xcf, 0xc8, 0xbd, 0xcf, 0xcf, 0xb9, 0xbd, 0xc8, 0xc7, 0xba, 0xc9, 0xbb, 0xbd, 0xca, 0xcb, 0xcf, 0xc8, 0xcd, 0xba, 0xba, 0xb9, 0xcc, 0xcb, 0xbd, 0xc6, 0xcf, 0xca, 0xce, 0xb9, 0xbe, 0xcb, 0xca]

flag = "".join(chr(b ^ 0xFF) for b in cipher)
print(flag)
```
FLAG-07B00FB78E6DB54072EEF34B9051FA45