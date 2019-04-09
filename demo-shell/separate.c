#include "shell.h"

int separate_array(char *s, char **dest)
{
	char *token, *argument = strtok(s, "\n");
	int count;

	token = strtok(argument, " ");
	for (count = 0; token != NULL; count++)
	{
		dest[count] = token;
		printf("args: %s\n", token);
		token = strtok(NULL, " ");
	}	
	dest[count] = 0;
	return (0);
}
