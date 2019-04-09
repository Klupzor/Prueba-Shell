#include "shell.h"

/**
 * _strdup - create a dynamic copy array.
 * @str: string to copy
 *
 * Return: ponter array or null.
 */

char *_strdup(char *str)
{
	char *array;
	int i, size;

	if (!str)
		return (0);
	for (size = 1 ; str[size] != '\0' ; size++)
	{
	}
	array =  malloc((size * sizeof(char)) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
