#include "shell.h"

/**
 *handle_exit - manage the exit.
 *@argv: are the arguments.
 *@buffer: is the buffer.
 *Return: nothing.
*/

void handle_exit(char **argv, char *buffer)
{
	write(STDOUT_FILENO, "Bye! (-_-)zzz\n", 14);
	free_argv(argv);
	free(buffer);
	exit(145);
}

