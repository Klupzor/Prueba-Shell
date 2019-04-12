#include "shell.h"

/**
 * create_container - create spaces
 * Return: success 0, fail -1.
*/

int create_container(void)
{
	char **array;
	
	array = malloc(sizeof(char *) * 1);
	if (array == NULL)
	{
		perror("Error at create container: ");
		return (-1);
	}

	array[0] = _strdup(NULL);

	return (0);
}
