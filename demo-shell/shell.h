#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <dirent.h>
#include <errno.h>

int separate_array(char *s, char **dest);
int exe(char **argv);
int _strcmp(char *s1, char *s2);
int search_path(char *command);
int find_command(char *path, char *command);

#endif  
