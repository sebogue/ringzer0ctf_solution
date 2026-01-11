bits 64
default rel

lea r14, [_shellcode+0x12345678]  ;lea r14, [_shellcode] génère des NULL bytes
sub r14, 0x12345678

push byte 43 ; taille du shellcode encodé
pop rcx

_decode:
    dec byte [r14]
    add r14, 1
    loop _decode

_shellcode: