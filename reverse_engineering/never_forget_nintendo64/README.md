Décompilation binary ninja:
```c
int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int32_t var_420 = 0x2398abf2;
    int32_t var_41c = 0x4bdbedfa;
    printf("Password:");
    char nptr[0x408];
    __isoc99_scanf("%1023s", &nptr);
    int32_t result;
    
    if (atoi(&nptr) != 0x6f7499ec)
        result = puts("Wrong password!");
    else
        result = printf("Good job FLAG-%x%i\n", 0x6f749f25, 0x6f7499ec, 0x2398abf2);
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}
```

printf("Good job FLAG-%x%i\n", 0x6f749f25, 0x6f7499ec, 0x2398abf2);

On n'a qu'à run cette commande dans un script c pour voir le flag.

FLAG-6f749f251869912556