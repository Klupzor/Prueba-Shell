#include "shell.h"

/**
 *search_slash - search slash.
 *@input: string where find the "/".
 *Return: always 0.
 */

int search_slash(char *input)
{
	int find;

	for (find = 0; input[find] != '\0'; find++)
	{
		if (input[find] == '/')
			return (1);
	}
	return (0);
}
