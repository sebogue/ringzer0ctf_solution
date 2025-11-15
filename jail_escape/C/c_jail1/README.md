ssh level1@challenges.ringzer0ctf.com -p 10228

Mot de passe: level1

Attention la fonction fopen ne fonctionne pas.
J'ai littéralement adapté un code trouvé en ligne 

```c
const char *filename = "flag.txt";
int fd;
char buffer[1024];
ssize_t bytes_read;

fd = open(filename, O_RDONLY);
if (fd == -1) {
    perror("Error opening file for reading");
    return 1;
}

while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0) {
    write(STDOUT_FILENO, buffer, bytes_read);
}

if (bytes_read == -1) {
    perror("Error reading file");
}

close(fd);

return 0;
```
DONE

Ne pas oublier d'écrire DONE pour la compilation

Voilà le flag
FLAG-ql3mI2Z8fGq56kK5QdwK8oMxgWwvji8R