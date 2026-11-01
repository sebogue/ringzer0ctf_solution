La section .text de l'exécutable est obfusqué par un XOR répétitif à l'aide de la clé D8 27

On peut donc décrypter la section .text

Maintenant en passant le code dans le décompilateur Ghidra:
```c
void _INIT_2(void)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_20;
  int local_1c [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c[0] = 4;
  local_1c[1] = 7;
  local_1c[2] = 0xb;
  if (DAT_00304010 <= DAT_0030407c) {
    lVar1 = ptrace(PTRACE_TRACEME,0,0,0);
    if (lVar1 != -1) {
      s_You_Win_But_No_FLAG_For_You_00304020[0] = 'F';
      s_You_Win_But_No_FLAG_For_You_00304020[1] = 'L';
      s_You_Win_But_No_FLAG_For_You_00304020[2] = 'A';
      s_You_Win_But_No_FLAG_For_You_00304020[3] = 'G';
      for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
        s_You_Win_But_No_FLAG_For_You_00304020[local_1c[local_20]] = '-';
      }
      s_You_Win_But_No_FLAG_For_You_00304020[0xe] = '\0';
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}
```
il y a 3 itérations qui s'exécute sur cette string : "FLAGWin But No FLAG For You"
donnant FLAG-in-But-No\x0FLAG For You

Le flag est donc
FLAG-in-But-No
