#include "shell.h"
/**
 * execute_command - executes command.
 * @args: The arguments for the command.
 */
void execute_command(char **args)
{
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("fork failed");
		exit(1);
	}
	else if (pid == 0)
	{
		execute_child(args);
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
}
