#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "shell.h"

int search_path(char **command)
{
	int find = 0;
	char *path, *copy;

	copy = _findpath();
	copy = strtok(copy, "=");
	path = strtok(NULL, "=");
	path = strtok(path, ":");
	while (path != NULL && find != 1)
	{
		printf("buscando en: %s\n", path);
		find = find_command(path, command);
		path = strtok(NULL, ":");
	}			
	return (0);
}

