# include "shell.h"

void mod_command(char *path, char **command)
{
	free(command[0]);
	command[0] = path;
}
