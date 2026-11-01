Décompiler avec Hex-Rays
```c
int __cdecl dummy_init()
{
  unsigned __int64 v0; // rbp
  char *v1; // rdi
  __int64 i; // rcx
  char *v3; // rdi
  __int64 j; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  char key[1024]; // [rsp+6h] [rbp-862h] BYREF
  char output[1024]; // [rsp+406h] [rbp-462h] BYREF
  char buffer[34]; // [rsp+806h] [rbp-62h] BYREF
  unsigned __int64 v12; // [rsp+828h] [rbp-40h]

  v0 = 0;
  v12 = __readgsqword(0x28u);
  qmemcpy(buffer, &unk_236, sizeof(buffer));
  v1 = key;
  for ( i = 256; i; --i )
  {
    *(_DWORD *)v1 = 0;
    v1 += 4;
  }
  v3 = output;
  for ( j = 256; j; --j )
  {
    *(_DWORD *)v3 = 0;
    v3 += 4;
  }
  strcpy(
    key,
    "28714143kkl23jlsdkj34hji53jhk345khj543jhk354h354jh354jhkl354jhkl354hjk345hjk3h4i5h3l4h5iul34u6h4e5uh7ui5h7uilyhhiuyh"
    "uileyhlui6yhuilyuhil55hhuilhiw543uhiw34uhihuiuh6iwl354h");
  v5 = toint(key);
  v6 = 0;
  sprintf(key, "0x%08x", v5);
  while ( v0 < strlen(buffer) )
  {
    v7 = key[v6++];
    sprintf(output, "%s%c", output, v7 ^ (unsigned int)(unsigned __int8)buffer[v0]);
    if ( v6 == strlen(key) )
      v6 = 0;
    ++v0;
  }
  printk("<1>%s", output);
  return 0;
}
```

C'est un xor entre 28714143 et kkl23jlsdkj34hji53jhk345khj543jhk354h354jh354jhkl354jhkl354hjk345hjk3h4i5h3l4h5iul34u6h4e5uh7ui5h7uilyhhiuyh

```python
buffer_chars = "v4qvOL{B\x0e^\x06N\x02rP\x01S\a\f4\x06K\a\x04*a\nfsS\x03N\x04"
val = 28714143
key_str = f"0x{val:08x}"
print(f"Clé générée : {key_str}")
output = ""
for i in range(len(buffer_chars)):
    c_char = ord(buffer_chars[i])
    k_char = ord(key_str[i % len(key_str)])
    output += chr(c_char ^ k_char)
print(f"Flag décodé : {output}")
```
FLAG-zIv78662C27a35R6375HW8RJ5364