#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int separate_array(char *s, char **dest);
int exe(char **argv);
int _strcmp(char *s1, char *s2);

#endif  
