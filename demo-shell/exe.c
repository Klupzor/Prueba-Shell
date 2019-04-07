#include "shell.h"

int exe(char **argv)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
    	{
		perror("Error:");
		return (1);
    	}	
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
 		{
			perror("Error:");
 		}
		exit(989);
	}
	else
		wait(NULL);
	return (0);
}

