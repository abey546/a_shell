#include "shell.h"
/**
 * process_input - Processes user input and executes commands.
 * @input: User input.
 * Return: None.
 */
void process_input(char *input)
{
	const char *clear_code;
	char *token;
	char **args;

	trim_newline(&input);
	if (_strcmp(input, "exit") == 0)
	{
		free(input);
		exit(0);
	}
	else if (_strcmp(input, "env") == 0)
	{
		print_environment();
	}
	else if (_strcmp(input, "clear") == 0)
	{
		clear_code = "\033[H\033[J";
		write(STDOUT_FILENO, clear_code, strlen(clear_code));
	}
	else
	{
		token = strtok(input, "\n");
		while (token != NULL)
		{
			args = tokenize_input(token);
			execute_command(args);
			free(args);
			token = strtok(NULL, "\n");
		}
	}
	free(input);
}


