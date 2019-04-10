#include "shell.h"

/**
 *exe - execute.
 *@argv: are the arguments.
 *Return: always 0.
*/

int exe(char **argv)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("hsh: ");
		return (-2);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("exe Error");
			exit(123);
		}
	}
	else
	{
		wait(NULL);
	}
	return (0);
}

