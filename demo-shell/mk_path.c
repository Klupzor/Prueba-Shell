#include "shell.h"
/**
 * _strcpy - prints reverse  copy.
 *
 * @s: char string.
 * @a: copy char string.
 * Return: Always 0.
 */
char *mk_path(char *command, char *path)
{
	int c, size_cmd, size_path, total, icp = 0;
	char cp[100];

	for (size_cmd = 0 ; command[size_cmd] != '\0' ; size_cmd++)
	{
		cp[size_cmd] = command[size_cmd];
	}
	cp[size_cmd] = '\0';
	for (size_path = 0; path[size_path] != '\0'; size_path++)
	{
	}
	total = size_cmd + size_path + 1;
	for (c = 0 ; c <= total; c++)
	{
		if (c < size_path)
			command[c] = path[c];
		else if (c == size_path)
			command[c] = '/';
		else
		{
			command[c] = cp[icp];
			icp++;
		}
	}
	return (command);
}
