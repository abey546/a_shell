#include "shell.h"
/**
 * get_environment_variable - get the environment variable
 * @name: the name of the environment
 * Return: The value of the environment variable, or NULL if not found.
 */
char *get_environment_variable(const char *name)
{
	char **env;
	char *value;

	for (env = environ; *env != NULL; env++)
	{
		if (local_strncmp(*env, name, _strlen(name)) == 0)
		{
			value = (char *)malloc(MAX_PATH_LENGTH);
			if (value == NULL)
			{
				perror("memory allocation failed");
				exit(1);
			}
			custom_strncpy(value, *env + _strlen(name) + 1, MAX_PATH_LENGTH - 1);
			return (value);
		}
	}
		return (NULL);
}
