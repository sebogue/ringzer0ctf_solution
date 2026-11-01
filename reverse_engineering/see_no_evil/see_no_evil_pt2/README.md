Pour le niveau 2, il faut comprendre ce code:
```c
int64_t sub_140005f00()
{
    sub_1400031f0(&data_140041f00, "[*] Level 2... ");
    CreateThread(nullptr, 0, sub_140005f60, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr);
    WaitForSingleObject(data_140041ea8, 0xffffffff);
    return sub_140005760(2);
}

int64_t sub_140005f60()
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    
    while (true)
    {
        if (*(GetProcessHeap() + 0x74))
        {
            OutputDebugStringA("Heap Corruption Detected.");
            nullptr();
        }
        
        data_140041ec0 = 0x481257362efb5820;
        SetEvent(data_140041ea8);
    }
}
```

Le niveau 2 part un thread et bloque en attendant un event data_140041ea8.

Pour que cet event soit envoyé, il faut bypass ce if provoquant un échec:
```c
if (*(GetProcessHeap() + 0x74))
```

Puis comme pour le premier challenge la méthode :
return sub_140005760(2);

affichera le flag (cette fois ecx = 2 plutôt que 1)

Il ne faut pas oublier d'avoir mis une patch pour le niveau 1 autrement on arrivera jamais dans le while true

Je ne veux jamais entrer dans if (*(GetProcessHeap() + 0x74)), on peut modifier la commande pour mettre un jmp donc qui va se faire a chaque fois. il faut par contre enlever le breakpoint sur celui ci une fois changé autrement le continue (F9) va continuer de rester coincé dans le while true (le thread lancé semble y rester coincé)

FLAG-VMOKkL86JbTuhEViFvxyao4H2k