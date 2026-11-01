Décompilation avec Ghidra:
```c
undefined8 main(void)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  code *local_10;
  
  local_68 = 0x485e2beb;
  local_64 = 0xc180c931;
  local_60 = 0x13368022;
  local_5c = 0xe2c6ff48;
  local_58 = 0xee8348f8;
  local_54 = 0xc0314822;
  local_50 = 0x894801b0;
  local_4c = 0xfa8948c7;
  local_48 = 0x23c28348;
  local_44 = 0x3148050f;
  local_40 = 0xf3cb0c0;
  local_3c = 0xffd0e805;
  local_38 = 0x60cffff;
  local_34 = 0xf670d0b;
  local_30 = 0x30071e23;
  local_2c = 0x3a05203f;
  local_28 = 0x9133d04;
  local_24 = 0x3c382f2f;
  local_20 = 0x250c071b;
  local_1c = 0x27227a2e;
  local_18 = 0xa090210;
  local_14 = 0;
  local_10 = (code *)&local_68;
  (*local_10)();
  return 0;
}
```
C'est donc un main qui écrit et exécute un nouveau code. On peut investiguer ces bytes écrit dans un fichier à part (code.bin). 

Nouvelle décompilation avec Binary ninja
```c
int32_t j_sub_2d()
{
    int32_t ebp;
    /* tailcall */
    return sub_2d(ebp);
}

int32_t __convention("regparm") sub_2(int32_t arg1)
{
    void* const __return_addr_1 = __return_addr;
    int32_t eax = arg1 - 1;
    int32_t i = 0;
    i = 0x22;
    
    do
    {
        *__return_addr_1 ^= 0x13;
        eax -= 1;
        __return_addr_1 += 1;
        i -= 1;
    } while (i);
    
    int32_t eflags;
    void temp0;
    temp0 = __syscall_32();
    int32_t eax_4;
    eax_4 = 0x3c;
    int32_t eflags_1;
    void temp0_1;
    temp0_1 = __syscall_32();
    int32_t ebp;
    /* tailcall */
    return sub_2d(ebp);
}

int32_t sub_2d(int32_t arg1 @ ebp, int16_t arg2)
{
    int32_t eax;
    char eax_2;
    int32_t ecx_1;
    char* edx;
    eax_2 = sub_2(eax);
    char eax_1 = eax_2 | 6;
    int32_t ecx = ecx_1 | *0x1e230f67;
    int32_t entry_ebx;
    *j_sub_2d = 0xeb ^ *(&entry_ebx + 1);
    *0x133d043a &= eax_1;
    *j_sub_2d = 0x485e2beb | arg1;
    int32_t eflags;
    int32_t eflags_1;
    char temp0;
    temp0 = __das(eax_1, eflags);
    *(entry_ebx * 2);
    
    if (!(__builtin_popcount(temp0 | 0x25) & 1))
        /* jump -> 0x71 */
    
    int32_t eflags_2;
    char temp0_2;
    temp0_2 = __daa(temp0 | 0x25, eflags_1);
    *edx = *edx + temp0_2;
    *edx |= ecx;
    /* undefined */
}
```

Le script est simple on XOR les bytes originaux qui ont permi de concevoir le code.
xor chacun avec 0x13.

Ca ne fonctionne pas.

Mais le nom du challenge donne un indice et on sait que c'est le même byte qui est appliqué partout. En le changeant de 0x13 pour 0x4a, on obtient le flag:

FLAG-EiTMzujOpNwYCeervQMFod0hmZHC