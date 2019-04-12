#include "shell.h"

/**
 * find_command - commands.
 *
 * @path: is the directory.
 * @command: is the command.
 * Return: succes 0, fail 1.
 */

int find_command(char *path, char **command)
{
	struct stat fileStat;
	char *dir;

	dir = mk_path(command[0], path);
	printf("buscando: %s\n", dir);
	if (stat(dir, &fileStat) < 0)
	{
		free(dir);
		return (0);
	}

	printf("lo encontro: %s\n", command[0]);
	mod_command(dir, command);
	exe(command);
	return (1);
}
