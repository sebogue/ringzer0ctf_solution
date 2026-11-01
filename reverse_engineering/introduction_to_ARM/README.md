Décompilation avec kuna:

```c
unsigned int main(void)
{
  void *v1; // r0 | r2 | r3
  char *v2; // r2
  unsigned int v3; // r0 | r3
  char v4 [1024]; // stack - 0x40c
  unsigned int *v5; // r0 | r3 | stack - 0xc
  
  v5 = NULL;
  v5 = malloc(0xc);
  *v5 = malloc(10);
  memset((void *)*v5,0,10);
  v1 = malloc(10);
  v5[1] = v1;
  memset((void *)v5[1],0,10);
  v1 = malloc(0xc);
  v5[2] = v1;
  memset((void *)v5[2],0,0xc);
  scanf("%1023s",v4);
  memcpy((void *)*v5,"AEe04",6);
  memcpy((void *)v5[1],"fgB37",6);
  strcpy((char *)v5[2],(char *)*v5);
  strcat((char *)v5[2],(char *)v5[1]);
  v2 = (char *)v5[2];
  if (strcmp(v2,v4)) // branch-flip
    printf("Wrong Password!");
  else {
    printf("FLAG-3jk3%s",v4);
  }
  free(v5);
  return v3;
}
```
c'est la concaténation de FLAG-3jk3 + AEe04 + fgB37
FLAG-3jk3AEe04fgB37