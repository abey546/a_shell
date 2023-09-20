#include "shell.h"
/**
 * display_prompt - Displays the command prompt.
 *  Return: None
 */
void display_prompt(void)
{
	char prompt[] = "$ ";

	write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);
}
