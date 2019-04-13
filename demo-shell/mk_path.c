#include "shell.h"

/**
 * mk_path - handle the copy of path.
 * @command: is the command to be organized.
 * @path: is the direction to be organized.
 * Return: Always 0.
 */

char *mk_path(char *command, char *path)
{
	int size_cmd, size_path, tsize, cnew, ccom;
	char *new;

	for (size_path = 1; path[size_path] != '\0'; size_path++)
	{
	}
	for (size_cmd = 1 ; command[size_cmd] != '\0' ; size_cmd++)
	{
	}

	tsize = size_path + size_cmd + 2;
	new = malloc(sizeof(char) * tsize);
	if (new == NULL)
		perror("Error creatin malloc on mk_path");

	for (cnew = 0; path[cnew] != '\0'; cnew++)
	{
		new[cnew] = path[cnew];
	}
	new[cnew] = '/';
	cnew++;
	for (ccom = 0; command[ccom] != '\0'; ccom++, cnew++)
	{
		new[cnew] = command[ccom];
	}
	new[cnew] = '\0';
	return (new);
}
