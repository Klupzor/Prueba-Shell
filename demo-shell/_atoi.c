#include "shell.h"
/**
 * _atoi - reed the number of char and convert into a int.
 *
 * @s: String.
 * Return: the number.
 */

int _atoi(char *s)
{
	unsigned int cont = 0, n = 0, i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
			cont++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10 + s[i]) - '0';
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	if (cont % 2 == 0)
		return (n);
	else
		return (-n);
}
