#include "shell.h"

/**
 *search_path - find the direction.
 *@command: is the instruction to be found.
 *Return: always 0.
*/

int search_path(char **command)
{
	int find = 0;
	char *path, *copy;

	copy = extract_path();
	copy = strtok(copy, "=");
	path = strtok(NULL, "=");
	path = strtok(path, ":");
	while (path != NULL && find != 1)
	{
		find = find_command(path, command);
		path = strtok(NULL, ":");
	}
	return (0);
}

