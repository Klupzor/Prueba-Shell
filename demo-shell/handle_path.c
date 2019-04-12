# include "shell.h"

void handle_path()
{
	char *path;
	int size_path;

	path = extract_path();
	for(size_path = 0 ; path[size_path] != '\0' ; size_path++)
	{
	}
	path[size_path] = '\n';
	size_path++;
	write(STDOUT_FILENO, path, size_path);
}
