#include "shell.c"

void cmd_not_found(char *cmd)
{
	miniPrint(cmd);
	miniPrint(": command not found\n");
}
