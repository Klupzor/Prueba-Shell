#include "shell.h"

char **split(char *input)
{
	char **argv, *token, **tmp;
	int cont, temp_size, size, stm;
	
	stm = 100;
	tmp = malloc(sizeof(char *) * stm);
	if(!tmp)
		return (0);
	strtok(input, "\n");
	token = strtok(input, " ");
        for (temp_size = 0; token != NULL; temp_size++)
        {
		tmp[temp_size] = _strdup(token);
                token = strtok(NULL, " ");
        }
	tmp[temp_size] = '\0';
	temp_size++;
	size = temp_size;
	argv = (char **) malloc(sizeof(char *) * size);
	if (argv == 0)
		return (0);

	for(cont = 0; cont < size; cont++)
	{
		argv[cont] = _strdup(tmp[cont]);
	}
	free_argv(tmp);
	return (argv);
}
