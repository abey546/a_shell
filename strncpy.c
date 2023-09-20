#include "shell.h"
/**
 *  custom_strncpy - Custom implementation of strncpy.
 *  @dest: Destination string.
 *  @src: Source string.
 *  @n: Maximum number of characters to be copied.
 *  Return: Pointer to the destination string.
 */
char *custom_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
