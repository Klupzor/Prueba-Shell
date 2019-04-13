# include "shell.h"

/**
 * mod_command - modify command and free.
 * @path: is the directory.
 * @command: is the catch command.
 * Return: nothing..
 */

void mod_command(char *path, char **command)
{
	free(command[0]);
	command[0] = path;
}
