00000000  EB4D              jmp 0x4f
00000002  5E                pop rsi
00000003  6683EC0C          sub sp,0xc
00000007  4889E0            mov rax,rsp
0000000A  4831C9            xor rcx,rcx
0000000D  688489729F        push qword 0xffffffff9f728984
00000012  4889CF            mov rdi,rcx
00000015  80C10C            add cl,0xc
00000018  408A3E            mov dil,[rsi]
0000001B  40F6D7            not dil
0000001E  408838            mov [rax],dil
00000021  48FFC6            inc rsi
00000024  6876AF01BB        push qword 0xffffffffbb01af76
00000029  48FFC0            inc rax
0000002C  E2EA              loop 0x18
0000002E  2C0C              sub al,0xc
00000030  4889C6            mov rsi,rax
00000033  6881A0EC30        push qword 0x30eca081
00000038  4831C0            xor rax,rax
0000003B  4889C7            mov rdi,rax
0000003E  40B701            mov dil,0x1
00000041  0401              add al,0x1
00000043  4889C2            mov rdx,rax
00000046  80C20B            add dl,0xb
00000049  0F05              syscall
0000004B  4831C0            xor rax,rax
0000004E  043C              add al,0x3c
00000050  0F05              syscall
00000052  E8AEFFFFFF        call 0x5
00000057  859AA6AF9193      test [rdx-0x6c6e505a],ebx
0000005D  B7BE              mov bh,0xbe
0000005F  96                xchg eax,esi
00000060  CB                retf
00000061  CACBC5            retf word 0xc5cb
00000064  75AD              jnz 0x13
00000066  2E3895685C6EE0    cmp [cs:rbp-0x1f91a398],dl
0000006D  7B5B              jpo 0xca
0000006F  52                push rdx
00000070  414E4453          push r11
00000074  54                push rsp
00000075  52                push rdx
00000076  32                db 0x32
00000077  5D                pop rbp
