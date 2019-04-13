#include "shell.h"

int miniPrint(char *str)
{
	int size_str;

	for (size_str = 1; str[size_str] != '\0'; size_str++)
        {
        }
	if(write(STDOUT_FILENO, str, size_str) == -1)
	{
		perror("Error on miniPrint ");
		return (-1);
	}

	return(0);
}
