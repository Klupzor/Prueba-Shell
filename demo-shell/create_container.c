#include "shell.h"

/**
 * create_container - create spaces
 * Return: success 0, fail -1.
*/

char **create_container(void)
{
	char **array;

	array = malloc(sizeof(char *) * 1);
	if (array == NULL)
	{
		perror("Error at create container: ");
		return (0);
	}
	array[0] = _strdup(NULL);

	return (array);
}
