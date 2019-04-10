#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create a dynamic array.
 * @size: size of array.
 * @c: char to fill array
 *
 * Return: ponter array or null.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);
	array = malloc(size * sizeof(char));
	if (array == 0)
		return (0);
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}

int main()
{
	char *cual;

	cual = create_array(10, 'a');
	cual[9] = '\0';
	printf("%s\n", cual);

	free(cual);

}
