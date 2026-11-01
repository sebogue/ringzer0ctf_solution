J'ai essayé de objdump mais ca ne menait nulle part...

Finalement en lançant:
```sh
ndisasm -b 64 trivia.fun
```

```asm
00000000  8D05FAFFFFFF      lea eax,[rel 0x0]
00000006  040A              add al,0xa
00000008  FF                db 0xff
00000009  E048              loopne 0x53
0000000B  89E3              mov ebx,esp
0000000D  48C1EB10          shr rbx,byte 0x10
00000011  4881F3FFFFFF7F    xor rbx,0x7fffffff
00000018  CC                int3
00000019  7519              jnz 0x34
0000001B  4831C0            xor rax,rax
0000001E  B03C              mov al,0x3c
00000020  0F05              syscall
00000022  41C1A18C8E978A97  shl dword [r9-0x75687174],byte 0x97
0000002A  9F                lahf
0000002B  D39F8D93D39A      rcr dword [rdi-0x652c6c73],cl
00000031  8B92A1504831      mov edx,[rdx+0x314850a1]
00000037  C04889C1          ror byte [rax-0x77],byte 0xc1
0000003B  B022              mov al,0x22
0000003D  0F05              syscall
0000003F  4889CA            mov rdx,rcx
00000042  80C110            add cl,0x10
00000045  4C8D15D6FFFFFF    lea r10,[rel 0x22]
0000004C  4983C202          add r10,0x2
00000050  41F61C12          neg byte [r10+rdx]
00000054  4829C0            sub rax,rax
00000057  B022              mov al,0x22
00000059  0F05              syscall
0000005B  48FFC2            inc rdx
0000005E  4989D3            mov r11,rdx
00000061  4931CB            xor r11,rcx
00000064  75EA              jnz 0x50
00000066  4831C0            xor rax,rax
00000069  48FFC0            inc rax
0000006C  4889C7            mov rdi,rax
0000006F  4C89D6            mov rsi,r10
00000072  0F05              syscall
00000074  E8A2FFFFFF        call 0x1b
```

Le flag:
```
_trivia-asm-fun_
```