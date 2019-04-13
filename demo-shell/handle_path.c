# include "shell.h"

/**
 * handle_path - print path.
 * Return: nothing.
 */

void handle_path(void)
{
	char *path;
	int size_path;

	path = extract_path("PATH");
	for (size_path = 0; path[size_path] != '\0'; size_path++)
	{
	}
	path[size_path] = '\n';
	size_path++;
	write(STDOUT_FILENO, path, size_path);
	free(path);
}
