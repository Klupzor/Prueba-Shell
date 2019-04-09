/* CELEBR04

   This example reads the contents of a root directory.

 */
#define _POSIX_SOURCE
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#undef _POSIX_SOURCE
#include <stdio.h>

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

int main() {
  DIR *dir;
  struct dirent *entry;

  if ((dir = opendir("/home/vagrant/prueba")) == NULL)
    perror("opendir() error");
  else {
    puts("contents of root:");
    while ((entry = readdir(dir)) != NULL)
     //printf("  %s\n", entry->d_name);
	if (_strcmp(entry->d_name,"hijos.c") == 0)
		printf("lo encontro!\n");
    closedir(dir);
  }
return(0);
}
