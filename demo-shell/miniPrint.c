#include "shell.h"

/**
 *miniPrint - print the string.
 *@str: the string to print.
 *Return: success 0, fail -1.
 */

int miniPrint(char *str)
{
	int size_str;

	for (size_str = 1; str[size_str] != '\0'; size_str++)
	{
	}
	if (write(STDOUT_FILENO, str, size_str) == -1)
	{
		perror("Error on miniPrint ");
		return (-1);
	}

	return (0);
}
