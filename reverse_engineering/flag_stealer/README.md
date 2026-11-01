J'ai extrait les fichiers de l'image avec ```7z x 37dc0f85bc4cbd4634afae4a59bbc65.vmdk```

J'ai un exécutable flagstealer.exe et un fichier du flag encrypté.

Décompilation avec Ghidra:
```c
int __cdecl FUN_0040135c(LPCSTR param_1)

{
  char cVar1;
  HANDLE hFile;
  HANDLE hObject;
  DWORD DVar2;
  LPVOID lpBuffer;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_124;
  char local_120 [272];
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    strcpy(local_120,param_1);
    uVar4 = 0xffffffff;
    pcVar7 = local_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar7 = ":CRYPTED";
    pcVar8 = local_120 + (~uVar4 - 1);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    hObject = CreateFileA(local_120,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      DVar2 = GetLastError();
      return (uint)(DVar2 == 0x50) * 3 + -1;
    }
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar2 == 0xffffffff) {
      CloseHandle(hFile);
      CloseHandle(hObject);
    }
    else {
      lpBuffer = VirtualAlloc((LPVOID)0x0,DVar2,0x1000,4);
      if (lpBuffer != (LPVOID)0x0) {
        BVar3 = ReadFile(hFile,lpBuffer,DVar2,&local_124,(LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          DVar6 = 0;
          if (0 < (int)DVar2) {
            do {
              *(byte *)((int)lpBuffer + DVar6) =
                   *(byte *)((int)lpBuffer + DVar6) ^ (char)DVar6 - 0x2dU;
              DVar6 = DVar6 + 1;
            } while (DVar2 != DVar6);
          }
          BVar3 = WriteFile(hObject,lpBuffer,DVar2,&local_124,(LPOVERLAPPED)0x0);
          if (BVar3 != 0) {
            SetFilePointer(hFile,0,(PLONG)0x0,0);
            uVar4 = 0xffffffff;
            pcVar7 = s_Your_flag_was_stolen__Pay_ransom_00402000;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            BVar3 = WriteFile(hFile,s_Your_flag_was_stolen__Pay_ransom_00402000,~uVar4 - 1,
                              &local_124,(LPOVERLAPPED)0x0);
            if (BVar3 != 0) {
              SetEndOfFile(hFile);
              CloseHandle(hFile);
              CloseHandle(hObject);
              return 1;
            }
          }
        }
      }
    }
  }
  return -1;
}
```

En réalité, le flag n'est pas encrypté avec RSA-TLS-Rijndael-528. c'est juste un XOR.
```python
def decrypt_flag(encrypted_bytes):
    decrypted = bytearray()
    for i, b in enumerate(encrypted_bytes):
        # L'opération du code : edx_1 - 0x2d
        key = (i - 0x2d) & 0xFF
        decrypted.append(b ^ key)
    return decrypted

with open('/Users/seb/Downloads/ringzero.flag:CRYPTED', 'rb') as f:
    encrypted_data = f.read()

flag = decrypt_flag(encrypted_data)
print("Flag décodé :", flag.decode('utf-8', errors='ignore'))
```
FLAG-73874cfb1f6860cb10205ece36f15a21
