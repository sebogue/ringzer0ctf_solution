On a pas mal d'option. Selon moi le plus efficace est de décompiler l'exécutable ici:
https://dogbolt.org/?id=846a3dd3-ba7a-456a-bdb0-58e626139e7d#Ghidra=159&BinaryNinja=110

La combinaison de décompilation de code et de l'IA rend tout le processus de reverse engineer beaucoup + simple que les techniques OG.

main en c:
```c
int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t var_14 = 0;
    int32_t eax = malloc(0x18);
    memset(eax, 0, 0x18);
    __builtin_strcpy(eax, "FLAG-4092");
    int32_t i = 0xffffffff;
    int32_t edi = eax;
    
    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;
        
        if (!cond:0_1)
            break;
    }
    
    __builtin_strcpy(eax + ~i - 1, "849uio2jf");
    puts("Loading...");
    int32_t i_1 = 0xffffffff;
    int32_t edi_1 = eax;
    
    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 += 1;
        i_1 -= 1;
        
        if (!cond:1_1)
            break;
    }
    
    __builtin_strcpy(eax + ~i_1 - 1, "klsj4kl");
    puts("Where is the flag?");
    return 0;
}
```

main en assembler:
```asm
Dump of assembler code for function main:
   0x0804846c <+0>:     push   %ebp
   0x0804846d <+1>:     mov    %esp,%ebp
   0x0804846f <+3>:     push   %edi
   0x08048470 <+4>:     and    $0xfffffff0,%esp
   0x08048473 <+7>:     sub    $0x30,%esp
   0x08048476 <+10>:    movl   $0x0,0x2c(%esp)
   0x0804847e <+18>:    movl   $0x18,(%esp)
   0x08048485 <+25>:    call   0x8048330 <malloc@plt>
   0x0804848a <+30>:    mov    %eax,0x2c(%esp)
   0x0804848e <+34>:    movl   $0x18,0x8(%esp)
   0x08048496 <+42>:    movl   $0x0,0x4(%esp)
   0x0804849e <+50>:    mov    0x2c(%esp),%eax
   0x080484a2 <+54>:    mov    %eax,(%esp)
   0x080484a5 <+57>:    call   0x8048370 <memset@plt>
   0x080484aa <+62>:    mov    0x2c(%esp),%eax
   0x080484ae <+66>:    movl   $0x47414c46,(%eax)
   0x080484b4 <+72>:    movl   $0x3930342d,0x4(%eax)
   0x080484bb <+79>:    movw   $0x32,0x8(%eax)
   0x080484c1 <+85>:    mov    0x2c(%esp),%eax
   0x080484c5 <+89>:    movl   $0xffffffff,0x1c(%esp)
   0x080484cd <+97>:    mov    %eax,%edx
   0x080484cf <+99>:    mov    $0x0,%eax
   0x080484d4 <+104>:   mov    0x1c(%esp),%ecx
   0x080484d8 <+108>:   mov    %edx,%edi
   0x080484da <+110>:   repnz scas %es:(%edi),%al
   0x080484dc <+112>:   mov    %ecx,%eax
   0x080484de <+114>:   not    %eax
   0x080484e0 <+116>:   lea    -0x1(%eax),%edx
   0x080484e3 <+119>:   mov    0x2c(%esp),%eax
   0x080484e7 <+123>:   add    %edx,%eax
   0x080484e9 <+125>:   movl   $0x75393438,(%eax)
   0x080484ef <+131>:   movl   $0x6a326f69,0x4(%eax)
   0x080484f6 <+138>:   movw   $0x66,0x8(%eax)
   0x080484fc <+144>:   movl   $0x80485f8,(%esp)
   0x08048503 <+151>:   call   0x8048340 <puts@plt>
   0x08048508 <+156>:   mov    0x2c(%esp),%eax
   0x0804850c <+160>:   movl   $0xffffffff,0x1c(%esp)
   0x08048514 <+168>:   mov    %eax,%edx
   0x08048516 <+170>:   mov    $0x0,%eax
   0x0804851b <+175>:   mov    0x1c(%esp),%ecx
   0x0804851f <+179>:   mov    %edx,%edi
   0x08048521 <+181>:   repnz scas %es:(%edi),%al
   0x08048523 <+183>:   mov    %ecx,%eax
   0x08048525 <+185>:   not    %eax
   0x08048527 <+187>:   lea    -0x1(%eax),%edx
   0x0804852a <+190>:   mov    0x2c(%esp),%eax
   0x0804852e <+194>:   add    %edx,%eax
   0x08048530 <+196>:   movl   $0x6a736c6b,(%eax)
   0x08048536 <+202>:   movl   $0x6c6b34,0x4(%eax)
   0x0804853d <+209>:   movl   $0x8048603,(%esp)
   0x08048544 <+216>:   call   0x8048340 <puts@plt>
   0x08048549 <+221>:   mov    $0x0,%eax
   0x0804854e <+226>:   mov    -0x4(%ebp),%edi
   0x08048551 <+229>:   leave
   0x08048552 <+230>:   ret
End of assembler dump.
```

FLAG-4092849uio2jfklsj4kl