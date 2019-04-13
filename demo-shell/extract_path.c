#include "shell.h"

/**
 *extract_path - add arguments.
 *@var: environment variable.
 *Return: always 0.
*/

char *extract_path(char *var)
{
	int i, j = 0;
	char *copy;

	for (i = 0; *environ[i]; i++)
	{
		while (environ[i][j])
		{
			if (var[j] == '\0')
			{
				copy = _strdup(environ[i]);
				return (copy);
			}
			if (environ[i][j] == var[j])
				j++;
			else
				break;
		}
	}
	return (0);
}

