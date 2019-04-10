#include "shell.h"

/**
 * free_argv - add arguments.
 * @array: are the arguments to be free.
 * Return: nothing.
*/

void free_argv(char **array)
{
	int cont, size;

	if (array)
	{
		for (size = 0 ; array[size] ; size++)
		{
		}
		for (cont = 0 ; cont < size ; cont++)
		{
			free(array[cont]);
		}
		free(array);
	}
}
