#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
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
