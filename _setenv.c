#include <stdlib.h>
#include <stdio.h>

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
			//printf("libera pos[%i]\n", cont);
                        free(array[cont]);
                }
                free(array);
        }
}

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

char **add_new_space(char **hotel, char *huesped)
{
	char **newHotel;
	int recor, botones;

	for(recor = 0; hotel[recor] != NULL; recor++)
	{
		printf("antes de: %s\n", hotel[recor]);
	}
	recor++;
	printf("New rooms: %i\n", recor);
	newHotel = malloc(sizeof(char *) * (recor + 1));

	if (hotel[0] == NULL)
	{
		printf("Es el primero\n");
		newHotel[0] = _strdup(huesped);
		newHotel[1] = hotel[0];
	}
	else
	{
		for(botones = 0; hotel[botones] != NULL; botones++)
		{
			newHotel[botones] = hotel[botones];
		}

		newHotel[botones] = _strdup(huesped);
		newHotel[botones + 1] = hotel[botones];
	}

	for(recor = 0; newHotel[recor]; recor++)
	{
		printf("despues de: %s\n", newHotel[recor]);
	}

	free(hotel);
	return (newHotel);
}

int main(void)
{
	char **hotel1;
	
	hotel1 = malloc(sizeof(char *) * 1);

	hotel1[0] = _strdup(NULL);

	hotel1 = add_new_space(hotel1, "Jeniffer");
	hotel1 = add_new_space(hotel1, "Andres");
	hotel1 = add_new_space(hotel1, "Maria");
	free_argv(hotel1);
	return (0);
}
