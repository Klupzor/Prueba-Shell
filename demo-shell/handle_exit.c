#include "shell.h"

/**
 *handle_exit - manage the exit.
 *@argv: are the arguments.
 *@buffer: is the buffer.
 *Return: nothing.
*/

void handle_exit(char **argv, char *buffer)
{
	int tmp = 137;
	write(STDOUT_FILENO, "Bye! (-_-)zzz\n", 14);
	if (argv[1])
		tmp = _atoi(argv[1]);
	free_argv(argv);
	free(buffer);
	exit(tmp);
}

