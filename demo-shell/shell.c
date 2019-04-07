#include "shell.h"

int main()
{
    char *buffer, *argv[100];
    size_t bufsize = 32;
    ssize_t characters;

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
		if (characters == -1)
			break;
		separate_array(buffer, argv);
		exe(argv);

	}
	 while (characters != -1);
    return(0);
}
