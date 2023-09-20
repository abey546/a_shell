#include "shell.h"
/**
 * handle_input - Handles user input in a loop.
 * Return: None.
 */
void handle_input(void)
{
	char *input;

	int is_terminal = isatty(STDIN_FILENO);

	while (1)
	{
		if (is_terminal)
		{
			display_prompt();
		}
		input = read_user_input();
		if (input == NULL)
		{
			break;
		}
		process_input(input);
	}
}
