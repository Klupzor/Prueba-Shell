#include "shell.h"

/**
 * add_new_str - create spaces
 * @array: is the array to be modified.
 * @str: is the strint to add at array.
 * Return: the direction of the new pointer.
*/

char **add_new_str(char **array, char *str)
{
	char **new;
	int recor, newcont;

	for (recor = 0; array[recor] != NULL; recor++)
	{
	}
	recor++;
	new = malloc(sizeof(char *) * (recor + 1));
	if (new == NULL)
	{
		perror("Error create malloc in new: ");
		return (NULL);
	}

	if (array[0] == NULL)
	{
		new[0] = _strdup(str);
		new[1] = array[0];
	}
	else
	{
		for (newcont = 0; array[newcont] != NULL; newcont++)
		{
			new[newcont] = array[newcont];
		}

		new[newcont] = _strdup(str);
		new[newcont + 1] = array[newcont];
	}

	for (recor = 0; new[recor]; recor++)
	{
	}

	free(array);
	return (new);
}
