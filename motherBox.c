#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
        char *array;
        int i, size;

	if (!str)
                return (0);
        for (size = 1; str[size] != '\0'; size++)
        {
        }
        array =  malloc((size * sizeof(char)) + 1);
        if (array == NULL)
                return (NULL);
        for (i = 0; str[i] != '\0'; i++)
        {
                array[i] = str[i];
        }
        array[i] = '\0';
        return (array);
}
void free_motherBox(char **array, int size)
{
	int cont;

	if (!(array == NULL || size == 0))
	{
		for (cont = 0; cont < size ; cont++)
		{
			free(array[cont]);
		}
		free(array);
	}
}
int addBox(char **motherBox, char *str, int pos)
{
	free(motherBox[pos]);
	motherBox[pos] = _strdup(str);
	return (0);
}

int main()
{
	char input[]="ls -l -a       s\n", *dest[1000];
	char **motherBox, *token;
	int i, cont, count, size;

	
	strtok(input, "\n");
	token = strtok(input, " ");
        for (count = 0; token != NULL; count++)
        {
		dest[count] = token;
		printf("args: %s\n", token);
                token = strtok(NULL, " ");
        }
	dest[count] = '\0';
	count++;
	printf("num args: %i\n", count);
	size = count;
	motherBox = (char **) malloc(sizeof(char *) * (size));
	if (motherBox == 0)
		return (-1);

	for(cont = 0 ; cont < size ; cont ++)
	{
	motherBox[cont] = _strdup(dest[cont]);
		
	//addBox(motherBox,dest[cont] , cont);
	//addBox(motherBox, "segundo", 1);
	//addBox(motherBox, "tercero", 2);
	}
	//addBox(motherBox, "modificado", 0);
	for (i = 0 ; i < size ; i++)
	{
		printf("on mother: %s\n", motherBox[i]);
	}
	free_motherBox(motherBox, size);
	return (0);
}
