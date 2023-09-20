#include "shell.h"
/**
 * custom_strcat - Custom implementation of strcat.
 * @dest: Destination string.
 * @src: Source string.
 * Return: None.
 */
void custom_strcat(char *dest, const char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
