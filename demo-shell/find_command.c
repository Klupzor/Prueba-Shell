#include "shell.h"

/**
 * _strcmp - prints concat string whit n bytes.
 *
 * @s1: char 1.
 * @s2: char 2.
 * Return: compare.
 */

int find_command(char *path, char **command) 
{
  	DIR *dir;
  	struct dirent *entry;

  	if ((dir = opendir(path)) == NULL)
    	perror("opendir() error");
	else 
	{
   		while ((entry = readdir(dir)) != NULL)
		{
			if (_strcmp(entry->d_name, command[0]) == 0)
			{
				printf("lo encontro: %s\n", command[0]);
				mk_path(command, path);
				printf("el nuevo: %s\n", command[0]);
				exe(command);
				return (1);
			}
		}
    		closedir(dir);
  	}
	return(0);
}
