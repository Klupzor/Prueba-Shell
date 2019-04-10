#include "shell.h"

int add_argv(char **argv, char *str, int pos)
{
	free(argv[pos]);
	argv[pos] = _strdup(str);
	return (0);
}

