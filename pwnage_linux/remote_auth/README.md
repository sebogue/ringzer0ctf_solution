On a un exécutable ...
En faisant un dissassemble sur dogbolt.org j'ai vu qu'il y a une connexion via socket 
et les fonctions suivante:

```c
undefined8 main(int param_1,long param_2){
    void *__ptr;
    __ptr = (void *)zmalloc(0x51d8);
    if (param_1 < 2) {
        init_socket_information(__ptr,0);
    }
    else {
        init_socket_information(__ptr,*(undefined8 *)(param_2 + 8));
    }
    init_server_wait_for_connect(__ptr);
    free(__ptr);
    return 0;
}

void init_server_wait_for_connect(undefined8 *param_1){
    ...
    iVar2 = validate_password(param_1 + 0x3b);
    if (iVar2 == 1) {
        sprintf(local_5028,"\n%s","Rao password:>");
    }
    else {
        sprintf(local_5028,"\nRao says you\'re wrong!\n%s","Rao password:>");
    }
    ...
}

undefined8 validate_password(char *param_1){
    int iVar1;
    undefined8 uVar2;
    char local_38 [48];

    memset(local_38,0,0x30);
    strcpy(local_38,param_1);
    iVar1 = strcmp(local_38,"ALPINE");
    if (iVar1 == 0) {
        rao_prompt();
        uVar2 = 1;
    }
    else {
        uVar2 = -1;
    }
    return uVar2;
}

void rao_prompt(void){
    size_t __n;
    char local_28 [32];

    builtin_strncpy(local_28,"Rao Shell dropping\n$ ",0x16);
    __n = strlen(local_28);
    send(g_fd,local_28,__n,0);
    dup2(g_fd,0);
    dup2(g_fd,1);
    dup2(g_fd,2);
    execve("/bin/sh",(char **)0x0,(char **)0x0);
    return;
}
```