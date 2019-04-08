#include "shell.h"

int separate_array(char *s, char **dest)
{
	char *token = strtok(s, "\n");
	int count;

	for (count = 0; token != NULL; count++)
	{
		printf("%s\n", token);
		dest[count] = token;
		token = strtok(NULL, "\n");
	}	
	dest[count] = 0;
	return (0);
}
