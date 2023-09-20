#include "shell.h"
/**
 * execute_child - Executes a command in the child process.
 * @args: The arguments for the command.
 */
void execute_child(char **args)
{
	char *executable;
	char *path;
	char error_message[256];

	executable = args[0];
	if (access(executable, X_OK) == 0)
	{
		if (execve(executable, args, NULL) == -1)
		{
			perror("error executing command");
			exit(1);
		}
	}
	else
	{
		path = get_environment_variable("PATH");
		if (path == NULL || !execute_in_path(executable, path, args))
		{
			custom_strcpy(error_message, "Command not found: ");
			custom_strcat(error_message, args[0]);
			custom_strcat(error_message, "\n");
			write(STDERR_FILENO, error_message, _strlen(error_message));
			exit(1);
		}
		free(path);
	}
}
