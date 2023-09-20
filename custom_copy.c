#include "shell.h"
/**
 * custom_strcpy - Custom implementation of strcpy.
 * @dest: Destination string.
 * @src: Source string.
 * Return: None.
 */
void custom_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
