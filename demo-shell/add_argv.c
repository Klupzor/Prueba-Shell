#include "shell.h"

/**
 *add_argv - add arguments.
 *@argv: are the arguments.
 *@str: is the string.
 *@pos: is the psition.
 *Return: always 0.
*/

int add_argv(char **argv, char *str, int pos)
{
	free(argv[pos]);
	argv[pos] = _strdup(str);
	return (0);
}

