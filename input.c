#include "shell.h"
/**
 * read_user_input - Reads user input from stdin.
 * Return: Pointer to the user input.
 */
char *read_user_input(void)
{
	char *input;
	size_t input_size;
	ssize_t input_length;

	input = NULL;
	input_size = 0;
	input_length = getline(&input, &input_size, stdin);
	if (input_length == -1)
	{
		free(input);
		return (NULL);
	}
	return (input);
}
