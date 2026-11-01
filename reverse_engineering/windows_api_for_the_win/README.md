Décompilation avec RetDec:
```c
...
char * g2 = ";\xfcsi\xf9\xda"; // 0x403065
...
int32_t _GetK1(int32_t result) {
    SetThreadContext(NULL, NULL);
    *(char *)result = (char)GetLastError() + 2;
    return result;
}
int32_t _GetK2(int32_t result) {
    IsDebuggerPresent();
    *(char *)(result + 1) = (char)GetLastError() - 62;
    return result;
}
int32_t _GetK3(int32_t result) {
    GetThreadContext(NULL, NULL);
    *(char *)(result + 2) = (char)GetLastError() + 18;
    return result;
}
int32_t _GetK4(int32_t result) {
    GlobalFree(NULL);
    *(char *)(result + 3) = (char)GetLastError() + 34;
    return result;
}
int32_t _GetK5(int32_t result) {
    IsBadCodePtr(NULL);
    *(char *)(result + 4) = (char)GetLastError() - 78;
    return result;
}
int32_t _GetK6(int32_t result) {
    GlobalHandle(NULL);
    *(char *)(result + 5) = (char)GetLastError() - 30;
    return result;
}
...
int main(int argc, char ** argv) {
    ___main();
    int32_t str2;
    __asm_rep_movsb_memcpy((char *)&str2, (char *)&g2, 7);
    int32_t * v1 = GlobalAlloc(64, 6); 
    printf("Password:");
    int32_t str; 
    scanf("%1023s", &str);
    int32_t v2 = (int32_t)v1;
    _GetK1(v2);
    _GetK2(v2);
    _GetK3(v2);
    _GetK4(v2);
    _GetK5(v2);
    _GetK6(v2);
    if (strlen((char *)&str) != 6) {
        _Wrong();
    }
    str = (int32_t)(*(char *)v1 ^ (char)str);
    if (strcmp((char *)&str, (char *)&str2) != 0) {
        _Wrong();
    }
    _ShowFlag(&str);
    return 0;
}
```

1. _GetK1 Échoue avec ERROR_INVALID_HANDLE.
	clé[0] = 6 + 2 = 8
2. _GetK2 N'échoue pas et ne modifie pas l'erreur, elle reste donc à 6.
	clé[1] = 6 - 62 = -56 équivalent de 200
3. _GetK3 : Échoue avec ERROR_INVALID_HANDLE (6).
	clé[2] = 6 + 18 = 24
4. _GetK4 : Échoue avec ERROR_INVALID_HANDLE (6).
	clé[3] = 6 + 34 = 40
5. _GetK5 : Échoue avec ERROR_INVALID_PARAMETER (87) sur les versions Windows standard.
	clé[4] = 87 - 78 = 9
6. _GetK6 : Échoue avec ERROR_INVALID_HANDLE (6).
	clé[5] = 6 - 30 = -24 équivalent à 232

Ca donne en ordre [8, 200, 24, 40, 9, 232]

le g2 est pour le xor avec la clé:
";\xfcsi\xf9\xda" = [0x3B, 0xFC, 0x73, 0x69, 0xF9, 0xDA]

Le password est donc :

[0x3B, 0xFC, 0x73, 0x69, 0xF9, 0xDA] XOR [8, 200, 24, 40, 9, 232]

En ascii donne:
34kAA2

On peut ensuite lancé le script et entrer le mot de passe

FLAG-l2nxcas98q23m6spoqy32k12pa