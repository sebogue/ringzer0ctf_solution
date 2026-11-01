fichier:
ELF 64-bit LSB executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 2.6.24, BuildID[sha1]=ad7de509e32b5f3bc3e02a6e3cff27001cbf7ee6, not stripped

Je pars un docker pour run le code:
docker build -t intelligentsoftware .
docker run --rm -it --cap-add=SYS_PTRACE -v "$(pwd)":/workspace intelligentsoftware gdb ./IntelligentSoftware


J'ai décompilé et fourni le code C décompilé à gemini pour me donner des pistes. Puis, il m'a guidé vers la méthode __libc_csu_ctor

```asm
Dump of assembler code for function __libc_csu_ctor:
=> 0x00000000004005b0 <+0>:     sub    $0x48,%rsp
   0x00000000004005b4 <+4>:     mov    %fs:0x28,%rax
   0x00000000004005bd <+13>:    mov    %rax,0x38(%rsp)
   0x00000000004005c2 <+18>:    xor    %eax,%eax
   0x00000000004005c4 <+20>:    mov    $0x4007d0,%eax
   0x00000000004005c9 <+25>:    movq   $0x4007d0,0x8(%rsp)
   0x00000000004005d2 <+34>:    mov    0x5(%eax),%eax
   0x00000000004005d6 <+38>:    cmp    $0xcc,%al
   0x00000000004005d8 <+40>:    je     0x4005ef <__libc_csu_ctor+63>
   0x00000000004005da <+42>:    mov    0x38(%rsp),%rax
   0x00000000004005df <+47>:    xor    %fs:0x28,%rax
   0x00000000004005e8 <+56>:    jne    0x40065a <__libc_csu_ctor+170>
   0x00000000004005ea <+58>:    add    $0x48,%rsp
   0x00000000004005ee <+62>:    ret
   0x00000000004005ef <+63>:    mov    0x200a8a(%rip),%rdi 
   0x00000000004005f6 <+70>:    movb   $0x46,0x10(%rsp)         # F
   0x00000000004005fb <+75>:    lea    0x10(%rsp),%rsi
   0x0000000000400600 <+80>:    movb   $0x4c,0x11(%rsp)         # L
   0x0000000000400605 <+85>:    movw   $0x3933,0x18(%rsp)       # 39
   0x000000000040060c <+92>:    mov    $0x28,%eax
   0x0000000000400611 <+97>:    movw   $0x4741,0x12(%rsp)       # AG
   0x0000000000400618 <+104>:   movb   $0x2d,0x14(%rsp)         # -
   0x000000000040061d <+109>:   test   $0x1,%dil
   0x0000000000400621 <+113>:   jne    0x40064e <__libc_csu_ctor+158>
   0x0000000000400623 <+115>:   test   $0x2,%dil
   0x0000000000400627 <+119>:   jne    0x400653 <__libc_csu_ctor+163>
   0x0000000000400629 <+121>:   mov    %eax,%ecx
   0x000000000040062b <+123>:   xor    %edx,%edx
   0x000000000040062d <+125>:   shr    $0x2,%ecx
   0x0000000000400630 <+128>:   test   $0x2,%al
   0x0000000000400632 <+130>:   rep movsl (%rsi),(%rdi)
   0x0000000000400634 <+132>:   je     0x400641 <__libc_csu_ctor+145>
   0x0000000000400636 <+134>:   movzwl (%rsi),%edx
   0x0000000000400639 <+137>:   mov    %dx,(%rdi)
   0x000000000040063c <+140>:   mov    $0x2,%edx
   0x0000000000400641 <+145>:   test   $0x1,%al
   0x0000000000400643 <+147>:   je     0x4005da <__libc_csu_ctor+42>
   0x0000000000400645 <+149>:   movzbl (%rsi,%rdx,1),%eax
   0x0000000000400649 <+153>:   mov    %al,(%rdi,%rdx,1)
   0x000000000040064c <+156>:   jmp    0x4005da <__libc_csu_ctor+42>
   0x000000000040064e <+158>:   movsb  (%rsi),(%rdi)
   0x000000000040064f <+159>:   mov    $0x27,%al
   0x0000000000400651 <+161>:   jmp    0x400623 <__libc_csu_ctor+115>
   0x0000000000400653 <+163>:   movsw  (%rsi),(%rdi)
   0x0000000000400655 <+165>:   sub    $0x2,%eax
   0x0000000000400658 <+168>:   jmp    0x400629 <__libc_csu_ctor+121>
   0x000000000040065a <+170>:   call   0x400560 <__stack_chk_fail@plt>
```
On voit l'apparition du mot FLAG-... dans l'asm
Mais il y a des commandes à bypass un ret et un call sur 0x40065a, puis il y a un jmp qu'on voudrait prendre 0x00000000004005d8, ce branchement n'apparait que lorsque %al=0xcc

Donc je n'ai qu'à lancer gdb et break sur 0x00000000004005d6, suivi de run, une fois rendu sur le breakpoint faire set $al=0xcc, suivi de continue. 


FLAG-Allocating