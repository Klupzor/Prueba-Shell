#include "shell.h"

/**
 *handle_sigint - entry point.
 *@sig_number: is the signal.
 *
 *Return: 0.
*/

void handle_sigint(int sig_number)
{
	(void) sig_number;
	write(STDOUT_FILENO, "\n(^.^)/$ ", 9);
	fflush(stdout);
}

/**
 *main - entry point.
 *
 *
 *Return: 0.
*/

int main(void)
{
	char *buffer, **argv;
	size_t bufsize = 32;
	ssize_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("Shell start! *\\(^-^)/* \n");
	while (characters != -1)
	{
		signal(SIGINT, handle_sigint);
		write(STDOUT_FILENO, "(^.^)/$ ", 8);
		characters = getline(&buffer, &bufsize, stdin);
		if (characters == -1)
			break;
		argv = split(buffer);
		if (search_slash(argv[0]) == 1)
		{
			if (exe(argv) == -1)
				perror("hsh: ");
		}
		else
		{
			printf("se buscara comando: %s\n", argv[0]);
			if (_strcmp(buffer, "exit") == 0)
				handle_exit(argv, buffer);
			search_path(argv);
		}
		free_argv(argv);
	}
	free(buffer);
	return (0);
}
