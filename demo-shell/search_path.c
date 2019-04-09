#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"

int search_path(char *command)
{
	extern char **environ;
	int i = 0;
	char *token, *path;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (strcmp("PATH", token) == 0)
		{
			path = strtok(NULL, "=");
			path = strtok(path, ":");
			while (path != NULL)
			{
				find_command(path, command);
				path = strtok(NULL, ":");
			}
		}
		i++;			
	}
return (0);
}

