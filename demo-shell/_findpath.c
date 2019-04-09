#include "shell.h"

char *_findpath()
{
	extern char **environ;
	int i, j = 0;
	char *p = "PATH", *find, *copy;
	

	for (i = 0; *environ[i]; i++)
	{
		while (environ[i][j])
		{
			if (p[j] == '\0')
			{
				copy = _strdup(environ[i]);
				return(copy);
			}
			if (environ[i][j] == p[j])
				j++;
			else
				break; 
		}
	}
	return (0);
}

