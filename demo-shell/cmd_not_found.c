#include "shell.h"

/**
 * cmd_not_found - print the error.
 *@cmd: is the command to be print
 *Return: nothing.
 */

void cmd_not_found(char *cmd)
{
	miniPrint(cmd);
	miniPrint(": command not found\n");
}
