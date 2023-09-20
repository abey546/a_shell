#include "shell.h"
/**
 * construct_full_path - Constructs the full path of an executable.
 * @directory: Directory containing the executable.
 * @executable: Name of the executable.
 * Return: Full path of the executable.
 */
char *construct_full_path(char *directory, char *executable)
{
	char *full_path;

	full_path = (char *)malloc(strlen(directory) + _strlen(executable) + 2);
	if (full_path == NULL)
	{
		perror("memory allocation failed");
		exit(1);
	}
	custom_strcpy(full_path, directory);
	custom_strcat(full_path, "/");
	custom_strcat(full_path, executable);
	return (full_path);
}
