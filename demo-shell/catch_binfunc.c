#include "shell.h"

/**
 *catch_binfunc - catch path.
 *@buffer: is the space to be fillet.
 *@argv: are the arguments to find path.
 *
 *Return: 0.
*/

int catch_binfunc(char *buffer, char **argv)
{
	if (_strcmp(buffer, "exit") == 0)
	{
		handle_exit(argv, buffer);
		return (1);
	}
	else if (_strcmp(buffer, "env") == 0)
	{
		penv();
		return (1);
	}
	else if (_strcmp(buffer, "$PATH") == 0)
	{
		handle_path();
		return (1);
	}
	else
		return (0);

}
