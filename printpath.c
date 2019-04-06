#include <unistd.h>
#include <stdio.h>
#include <string.h>

int printPath()
{
	
	extern char **environ;
	int i = 0;
	char *token, *path;

	while (environ[i])
	{
		token = strtok(environ[i], "=");
		if (strcmp("PATH", token) == 0)
		{
			path = strtok(NULL, "=");
			path = strtok(path, ":");
			while (path != NULL)
			{
				printf("%s\n", path);
				path = strtok(NULL, ":");
				
			}
		}
		i++;			
	}
}

void main()
{

	printPath();
}
