#include "shell.h"
/**
 * _strcpy - prints reverse  copy.
 *
 * @s: char string.
 * @a: copy char string.
 * Return: Always 0.
 */
char **mk_path(char **command, char *path)
{
	int size_cmd, size_path, stm;
	char *cp;

	stm = 1024;
	cp = malloc(sizeof(char) * stm);
	if(!cp)
		return(0);
	printf("command: %s path: %s\n", command[0], path);
	for (size_path = 0; path[size_path] != '\0'; size_path++)
	{
		cp[size_path] = path[size_path];
	}
	cp[size_path] = '/';
	size_path++;
	for (size_cmd = 0 ; command[0][size_cmd] != '\0' ; size_cmd++)
	{
		//printf("cp: %s\n", cp);
		cp[size_cmd + size_path] = command[0][size_cmd];
	}
	add_argv(command, cp, 0);
	free(cp);
	return (command);
}
