/**
 * _strcmp - prints concat string whit n bytes.
 *
 * @s1: char 1.
 * @s2: char 2.
 * Return: compare.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
