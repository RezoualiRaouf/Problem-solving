#include "main.h"

/**
 * _strncpy - Copies a string with specified number of characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *point_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (point_dest);
}
