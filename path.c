#include "shell.h"
/**
 * execute_in_path - Executes a command in a given path.
 * @executable: Name of the executable.
 * @path: Path to search for the executable.
 * @args: Array of arguments, where args[0] is the command.
 * Return: 0 if unsuccessful, otherwise doesn't return.
 */
int execute_in_path(char *executable, char *path, char **args)
{
	char *token;
	char *full_path;

	token = strtok(path, ":");
	while (token != NULL)
	{
		full_path = construct_full_path(token, executable);
		if (access(full_path, X_OK) == 0)
		{
			if (execve(full_path, args, NULL) == -1)
			{
				perror("error executing command");
				free(full_path);
				exit(1);
			}
		}
		free(full_path);
		token = strtok(NULL, ":");
	}
	return (0);
}
