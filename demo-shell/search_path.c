#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"

int search_path(char **command)
{
	extern const char **environ;
	int i = 0, find = 0;
	char *token, *path;

	while (environ[i])
	{
		printf("Environ: %s\n", environ[i]);
		token = strtok(environ[i], "=");
		printf("token: %s", token);
		if (strcmp("PATH", token) == 0)
		{
			path = strtok(NULL, "=");
			path = strtok(path, ":");
			while (path != NULL && find != 1)
			{
				printf("buscando en: %s\n", path);
				find = find_command(path, command);
				path = strtok(NULL, ":");
			}
			break;
		}
		i++;			
	}
return (0);
}

