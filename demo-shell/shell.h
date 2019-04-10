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

extern char **environ;
int exe(char **argv);
int _strcmp(char *s1, char *s2);
int search_path(char **command);
int find_command(char *path, char **command);
char **mk_path(char **command, char *path);
char *_strdup(char *str);
char *_findpath();
char *extract_path();
char **split(char *input);
void free_argv(char **array);
int add_argv(char **argv, char *str, int pos);
void handle_exit(char **argv, char *buffer);
int search_slash(char *input);

#endif  
