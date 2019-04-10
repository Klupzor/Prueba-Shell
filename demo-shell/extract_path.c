#include "shell.h"

/**
 *extract_path - add arguments.
 *
 *Return: always 0.
*/

char *extract_path()
{
	int i, j = 0;
	char *p = "PATH", *copy;

	for (i = 0; *environ[i]; i++)
	{
		while (environ[i][j])
		{
			if (p[j] == '\0')
			{
				copy = _strdup(environ[i]);
				return (copy);
			}
			if (environ[i][j] == p[j])
				j++;
			else
				break;
		}
	}
	return (0);
}

