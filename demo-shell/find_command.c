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
	DIR *dir;
	struct dirent *entry;

	dir = opendir(path);
	if (dir == NULL)
		perror("opendir() error");
	else
	{
		while ((entry = readdir(dir)) != NULL)
		{
			if (_strcmp(entry->d_name, command[0]) == 0)
			{
				printf("lo encontro: %s\n", command[0]);
				mk_path(command, path);
				printf("el nuevo: %s\n", command[0]);
				exe(command);
				return (1);
			}
		}
		closedir(dir);
	}
	return (0);
}
