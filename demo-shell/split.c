#include "shell.h"

/**
 *split - separate in little arguments.
 *@input: the string from getline.
 *Return: always 0, argv.
*/

char **split(char *input)
{
	char **argv, *token;
	int temp_size;

	argv = create_container();

	strtok(input, "\n");
	token = strtok(input, " ");
	for (temp_size = 0; token != NULL; temp_size++)
	{
		argv = add_new_str(argv, token);
		token = strtok(NULL, " ");
	}
	return (argv);
}
