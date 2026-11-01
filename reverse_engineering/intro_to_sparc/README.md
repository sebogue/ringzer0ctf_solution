Décompilation avec Ghidra
```c
undefined8 show_flag(undefined4 param_1,undefined4 param_2)
{
  undefined8 local_18;
  undefined8 local_10;
  undefined1 local_8;
  
  local_18 = 0x5350415243315333;
  local_10 = 0x5843334c4c334e54;
  local_8 = 0;
  printf("FLAG-%s",&local_18);
  return CONCAT44(param_2,param_1);
}
```
Clairement le flag est un string de la concaténation de local_18 et local_10
soit:

FLAG-SPARC1S3XC3LL3NT