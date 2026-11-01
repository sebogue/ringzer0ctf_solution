Décompilation avec binary ninja
```c
int32_t main(int32_t argc, char** argv, char** envp)
{
    printf("Password:");
    char str[0x404];
    scanf("%1023s", &str);
    
    if (atoi(&str) != 0x2c2319)
        puts("Wrong password");
    else
        printf("FLAG-ak3j3ka%s\n", &str);
    
    return 0;
}
```
Essentiellement on converti en int ce que la personne entre et on vérifie si ce qui est entré = 0x2c2319
0x2c2319 en entier = 2892569,

ensuite printf("FLAG-ak3j3ka%s\n", &str);

soit:
FLAG-ak3j3ka2892569