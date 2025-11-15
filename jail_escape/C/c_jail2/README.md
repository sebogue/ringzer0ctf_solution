ssh level2@challenges.ringzer0ctf.com -p 10229

Mot de passe: FLAG-ql3mI2Z8fGq56kK5QdwK8oMxgWwvji8R

```c
char buffer[100];
FILE *fp;
int fd;
fd = open64("flag.txt", O_RDONLY);
pread64(fd, buffer, 100, 0);
printf("flag: %s\n", buffer);
```
DONE

FLAG-0416ewrN2o058901Aqf4w9hsyH0dfqzd