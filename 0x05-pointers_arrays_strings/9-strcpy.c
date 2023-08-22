#include "main.h"
/**
 * _strcpy - Copies a string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *point_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	(src)++;
	(dest)++;
	}
	*dest = '\0';
	return (point_dest);
}
