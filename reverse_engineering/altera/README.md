Ce fichier est pour nios 2 (c'est une architecture de processeur embarqué pour les fpga de la famille altera). Donc un processeur virtuel, donc codé dans un langage HDL et synthétisé dans le FPGA. J'avais déjà conçu moi même un processeur virtuel pour une basys-3 donc c'est pas trop sorcier à comprendre. Essentiellement un FPGA est programmable contrairement à un vrai circuit d'ordinateur qui est "gravé" dans le silicium ...

Mais bon moi j'ai pas de carte de la famille altera, alors j'ai trouvé un site qui permet de dé-assembler des exécutables ELF pour nios. https://cpulator.01xz.net/?sys=nios

​```asm
    br      0x20d0
    jmpi    0x1010
    call    0x0
    jmpi    0x0
    andhi   zero, zero, 144
    movhi   zero, 0
    andi    zero, zero, 75
    movhi   zero, 32768
    br      0xffffc030
    xori    zero, zero, 25600
    br      0x2038
    movhi   zero, 128
    call    0xc
    stb     zero, 0(zero)
    movi    zero, 0
    ldbu    zero, 0(zero)
    movhi   zero, 3
    movhi   zero, 131
    call    0x200
    cmpnei  zero, zero, 35
    call    0x100
    cmpnei  zero, zero, 227
    andhi   zero, zero, 4
    movhi   zero, 4
    br      0x20b0
    andhi   zero, zero, 35
    andhi   zero, zero, 227
    cmplti  zero, zero, 3
    cmplti  zero, zero, 4
    cmplti  zero, zero, 132
    cmpeqi  zero, zero, 0
    ldhio   r9, -23120(r12)
    ldhio   r21, -28240(r5)
    andhi   r21, r14, 47525
    rdprs   r5, r13, -18251
    ldhio   et, -13875(r5)
    initd   -17987(r6)
    cmplti  zero, zero, 0
    ldb     at, 21817(zero)
    ldhu    zero, 0(zero)
    ldb     zero, 0(zero)
    cmpgei  zero, zero, 0
    br      0x2164
    cmpeqi  zero, zero, 159
    ldhuio  zero, 0(zero)
    muli    zero, zero, 143
    cmpltui zero, zero, 143
    muli    zero, zero, 0
    xorhi   zero, zero, 143
    sth     zero, 1(zero)
    cmpnei  zero, zero, 156
    cmpgei  zero, zero, 3
    cmpgei  zero, zero, 144
    rdprs   zero, zero, 0
    muli    zero, zero, 152
    blt     zero, zero, 0x21f4
    movui   zero, 144
    ldw     zero, 1(zero)
    rdprs   zero, zero, 140
    cmpeqi  zero, zero, 144
    call    0x62696c0
    ldbuio  ea, -13127(r13)
    bgeu    r14, zero, 0x2304
    stwio   at, -12847(zero)
    orhi    r9, r14, 49153
    call    0x6d656d0
    initd   -11883(zero)
    ldbio   r21, -11883(r14)
    ldbuio  r17, -12931(r14)
    sthio   bt, -23163(r13)
    call    0x6c5f5f0
    ldbuio  ea, -10803(r11)
    beq     r13, r5, 0xffffdc11
    call    0x494c470
    bgeu    zero, zero, 0xffffe750
    call    0x1000
    jmpi    0x1000
    jmpi    0x696918
    call    0x2000
    muli    zero, zero, 231
    stbio   zero, 4(zero)
    cmpltui zero, zero, 231
    stbio   zero, 20(zero)
    movhi   zero, 231
    stbio   zero, 28(zero)
    rdprs   zero, zero, 231
    stbio   zero, 36(zero)
    andi    zero, zero, 231
    beq     zero, zero, 0x2300
    cmplti  zero, zero, 231
    beq     zero, zero, 0x2310
    movui   zero, 231
    beq     zero, zero, 0x2320
    cmpnei  zero, zero, 231
    beq     zero, zero, 0x2334
    xori    zero, zero, 231
    beq     zero, zero, 0x2348
    cmpeqi  zero, zero, 231
    beq     zero, zero, 0x235c
    addi    sp, sp, -48
    stw     ra, 44(sp)
    stw     r23, 40(sp)
    stw     r22, 36(sp)
    stw     r21, 32(sp)
    stw     r20, 28(sp)
    stw     r19, 24(sp)
    stw     r18, 20(sp)
    stw     r17, 16(sp)
    stw     r16, 12(sp)
    stw     fp, 8(sp)
    addi    fp, sp, 8
    nextpc  r22
    movhi   r2, 0
    addi    r2, r2, 5716        # movia r2, 0x00001654
    add     r22, r22, r2
    call    0x25dc  (0x25dc: frame_dummy)
    call    0x27e4  (0x27e4: __do_global_ctors_aux)
    ldw     ra, 44(sp)
    ldw     r23, 40(sp)
    ldw     r22, 36(sp)
    ldw     r21, 32(sp)
    ldw     r20, 28(sp)
    ldw     r19, 24(sp)
    ldw     r18, 20(sp)
    ldw     r17, 16(sp)
    ldw     r16, 12(sp)
    ldw     fp, 8(sp)
    addi    sp, sp, 48
    ret
    br      0x23c8
    movhi   r14, 0
    addi    r14, r14, 9136      # movia r14, 0x000023b0
    sub     r15, r15, r14
    movhi   r13, 0
    ldw     r14, 14788(r13)
    ldw     r13, 14792(r13)
    jmp     r13
    movhi   r15, 0
    ldw     r15, 14796(r15)
    jmp     r15
    ldw     r15, 14800(r15)
    ldw     r15, 14804(r15)
    ldw     r15, 14808(r15)
    ldw     r15, 14812(r15)
    ldw     r15, 14816(r15)
    movhi   gp, 1
    addi    gp, gp, -18000      # movia gp, 0x0000b9b0
    mov     r2, sp
    addi    sp, sp, -12
    stw     r2, 8(sp)
    stw     r4, 4(sp)
    addi    r2, r2, 5496        # movia r2, 0x00001578
    movhi   r8, 0
    addi    r8, r8, 36      # movia r8, 0x00000024
    add     r8, r8, r22
    ldw     r8, 0(r8)
    stw     r8, 0(sp)
    movhi   r7, 0
    addi    r7, r7, 48      # movia r7, 0x00000030
    add     r7, r7, r22
    ldw     r7, 0(r7)
    addi    r6, sp, 16
    ldw     r5, 12(sp)
    movhi   r4, 0
    addi    r4, r4, 52      # movia r4, 0x00000034
    add     r4, r4, r22
    ldw     r4, 0(r4)
    mov     fp, zero
    addi    r2, r2, 40      # movia r2, 0x00000028
    add     r2, r2, r22
    ldw     r2, 0(r2)
    callr   r2
    addi    r2, r2, 44      # movia r2, 0x0000002c
    addi    r4, r4, 14784       # movia r4, 0x000039c0
    addi    r2, r2, 14787       # movia r2, 0x000039c3
    sub     r2, r2, r4
    movi    r3, 6
    bgeu    r3, r2, 0x24e8
    addi    r2, r2, 0       # movia r2, 0x00000000
    beq     r2, zero, 0x24e8
    jmp     r2
    addi    r2, r2, 14784       # movia r2, 0x000039c0
    srai    r2, r2, 2
    srli    r5, r2, 31
    add     r5, r5, r2
    srai    r5, r5, 1
    beq     r5, zero, 0x2524
    beq     r2, zero, 0x2524
    addi    sp, sp, -20
    stw     r17, 4(sp)
    movhi   r17, 0
    addi    r17, r17, 14852     # movia r17, 0x00003a04
    ldbu    r2, 0(r17)
    stw     ra, 16(sp)
    stw     r19, 12(sp)
    stw     r18, 8(sp)
    stw     r16, 0(sp)
    bne     r2, zero, 0x25ac
    addi    r2, r2, 14560       # movia r2, 0x000038e0
    movhi   r16, 0
    addi    r16, r16, 14564     # movia r16, 0x000038e4
    sub     r16, r16, r2
    srai    r16, r16, 2
    mov     r18, r2
    movhi   r19, 0
    addi    r19, r19, 14856     # movia r19, 0x00003a08
    addi    r16, r16, -1
    ldw     r2, 0(r19)
    bgeu    r2, r16, 0x25a0
    addi    r2, r2, 1
    stw     r2, 0(r19)
    add     r2, r2, r2
    add     r2, r18, r2
    br      0x2578
    call    0x24bc  (0x24bc: deregister_tm_clones)
    movi    r2, 1
    stb     r2, 0(r17)
    ldw     ra, 16(sp)
    ldw     r19, 12(sp)
    ldw     r18, 8(sp)
    ldw     r17, 4(sp)
    ldw     r16, 0(sp)
    addi    sp, sp, 20
    addi    sp, sp, -4
    stw     ra, 0(sp)
    ldw     ra, 0(sp)
    addi    sp, sp, 4
    addi    r4, r4, 14568       # movia r4, 0x000038e8
    ldw     r2, 0(r4)
    beq     r2, zero, 0x260c
    jmpi    0x24ec  (0x24ec: register_tm_clones)
    addi    sp, sp, -264
    stw     ra, 260(sp)
    stw     fp, 256(sp)
    addi    fp, sp, 256
    addi    r4, fp, -256
    movi    r5, 70
    movi    r6, 256
    call    0x2420
    call    0x23fc
    cmpeqi  r2, r2, 1337
    bne     r2, zero, 0x2660
    addi    r4, r4, 10416       # movia r4, 0x000028b0
    call    0x2408
    br      0x2700
    movi    r2, 76
    stb     r2, -255(fp)
    movi    r2, 65
    stb     r2, -254(fp)
    movi    r2, 71
    stb     r2, -253(fp)
    movi    r2, 45
    stb     r2, -252(fp)
    ldbu    r2, -250(fp)
    addi    r2, r2, 34
    stb     r2, -250(fp)
    ldbu    r2, -248(fp)
    addi    r2, r2, -2
    stb     r2, -248(fp)
    ldbu    r2, -247(fp)
    addi    r2, r2, 29
    stb     r2, -247(fp)
    ldbu    r2, -246(fp)
    addi    r2, r2, 42
    stb     r2, -246(fp)
    ldbu    r2, -245(fp)
    addi    r2, r2, -14
    stb     r2, -245(fp)
    ldbu    r2, -243(fp)
    addi    r2, r2, 37
    stb     r2, -243(fp)
    ldbu    r2, -240(fp)
    addi    r2, r2, -18
    stb     r2, -240(fp)
    ldbu    r2, -239(fp)
    addi    r2, r2, 10
    stb     r2, -239(fp)
    ldbu    r2, -238(fp)
    addi    r2, r2, -16
    stb     r2, -238(fp)
    stb     zero, -237(fp)
    addi    r4, r4, 10428       # movia r4, 0x000028bc
    addi    r5, fp, -256
    call    0x2414
    mov     r2, zero
    mov     sp, fp
    ldw     ra, 4(sp)
    ldw     fp, 0(sp)
    addi    sp, sp, 8
    addi    sp, sp, -32
    stw     r22, 24(sp)
    addi    r8, r8, 4764        # movia r8, 0x0000129c
    add     r22, r22, r8
    addi    r17, r17, -232      # movia r17, 0xffffff18
    addi    r2, r2, 56      # movia r2, 0x00000038
    addi    r16, r16, -232      # movia r16, 0xffffff18
    sub     r16, r16, r17
    add     r2, r22, r2
    stw     r21, 20(sp)
    stw     r20, 16(sp)
    stw     ra, 28(sp)
    mov     r20, r4
    mov     r19, r5
    mov     r18, r6
    add     r17, r17, r22
    mov     r21, zero
    beq     r16, zero, 0x27b8
    add     r2, r21, r21
    add     r2, r2, r17
    addi    r21, r21, 1
    mov     r4, r20
    mov     r5, r19
    mov     r6, r18
    bne     r21, r16, 0x2790
    ldw     ra, 28(sp)
    ldw     r22, 24(sp)
    ldw     r21, 20(sp)
    ldw     r20, 16(sp)
    addi    sp, sp, 32
    stw     ra, 8(sp)
    addi    r16, r16, 14552     # movia r16, 0x000038d8
    movi    r17, -1
    ldw     r2, 0(r16)
    beq     r2, r17, 0x2814
    addi    r16, r16, -4
    br      0x2800
    ldw     ra, 8(sp)
    addi    sp, sp, 12
    addi    r2, r2, 4432        # movia r2, 0x00001150
    call    0x2528  (0x2528: __do_global_dtors_aux)
    ldw     bt, -16951(r13)
    ldbio   r13, -11135(r14)
    stbio   zero, -31287(zero)
    ori r17, r14, 34209
    cmpeqi  r13, r14, -31268
    cmpeqi  r13, r14, -31340
    ldbio   ea, -11871(r7)
```

On voit dans l'asm ceci:
```asm
...
movi    r2, 76         L
stb     r2, -255(fp)
movi    r2, 65         A
stb     r2, -254(fp)
movi    r2, 71         G
stb     r2, -253(fp)
                       -
...
```

FLAG-FhFDcp8FkFF4P6