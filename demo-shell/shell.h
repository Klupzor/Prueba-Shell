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
#include <sys/stat.h>

extern char **environ;
int exe(char **argv);
int _strcmp(char *s1, char *s2);
int search_path(char **command);
int find_command(char *path, char **command);
char *mk_path(char *command, char *path);
char *_strdup(char *str);
char *_findpath();
char *extract_path(char *var);
char **split(char *input);
void free_argv(char **array);
void handle_exit(char **argv, char *buffer);
int search_slash(char *input);
void handle_path();
int catch_binfunc(char *buffer, char **argv);
char **add_new_str(char **array, char *str);
char **create_container(void);
void mod_command(char *path, char **command);
int miniPrint(char *str);
void cmd_not_found(char *cmd);
void penv();
int _atoi(char *s);

#endif
