#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int separate_array(char *s, char **dest)
{
	char *token = strtok(s, "\n");
	int count, i;

	for (count = 0; token != NULL; count++)
	{
		dest[count] = token;
		token = strtok(NULL, "\n");
	}	
	dest[count] = 0;
	return (0);
}

int main()
{
    char *buffer, *token[100];
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("Shell start! :D \n");
	do
	{    
    		printf("#AndJen$ ");
		characters = getline(&buffer,&bufsize,stdin);
		separate_array(buffer, token);
		if (execve(token[0], token, NULL) == -1)
 		{
        		perror("Error:");
 		}

	}
	 while (characters != -1);
    return(0);
}
