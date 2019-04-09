#include "shell.h"

int search_slash(char *s)
{
	int find;
	
	for (find = 0; s[find] != '\0'; find++)
	{
		if (s[find] == '/')
			return (1);
	}
	return (0);
}

void handle_sigint(int sig_number) 
{
	(void) sig_number;
	write(STDOUT_FILENO , "\n#AndJen$ ", 10); 
	fflush(stdout);
} 

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
	while (characters != -1)
	{    
		signal(SIGINT, handle_sigint);
    		write(STDOUT_FILENO, "#AndJen$ ", 9);
		characters = getline(&buffer,&bufsize,stdin);
		if (characters == -1)
			break;
		separate_array(buffer, argv);
		if (search_slash(argv[0]) == 1)
		{
			if (exe(argv) == -1)
				perror("hsh: ");
		}
		else
		{	
			printf("se buscara comando\n");
			search_path(argv[0]);
		}
		if (_strcmp(buffer, "exit") == 0)
			exit(127);

	}
    return(0);
}
