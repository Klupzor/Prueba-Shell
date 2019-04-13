#include "shell.h"

/**
 *search_path - find the direction.
 *@command: is the instruction to be found.
 *Return: always 0.
*/

int search_path(char **command)
{
	char *path, *copy;

	copy = extract_path("PATH");
	copy = strtok(copy, "=");
	path = strtok(NULL, "=");
	path = strtok(path, ":");
	while (path != NULL)
	{
		if (find_command(path, command) == 1)
		{
			free(copy);
			return (1);
		}
		path = strtok(NULL, ":");
	}
	free(copy);
	return (0);
}

