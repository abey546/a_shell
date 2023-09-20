#include "shell.h"
/**
 * print_environment - Prints the environment variables.
 * * Return: None.
 */
void print_environment(void)
{
	char **env;
	size_t len;


	for (env = environ; *env != NULL; env++)
	{
		len = strlen(*env);
		write(STDOUT_FILENO, *env, len);
		write(STDOUT_FILENO, "\n", 1);
	}
}

