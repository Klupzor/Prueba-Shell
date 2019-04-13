#include "shell.h"

/**
 *penv - print environment
 *Return: nothing.
 */

void penv(void)
{
	int c;

	for (c = 0; environ[c]; c++)
	{
		miniPrint(environ[c]);
		miniPrint("\n");
	}
}
