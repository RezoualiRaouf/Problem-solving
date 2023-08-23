#include "main.h"
/**
 * _strcat - concatenates tow strings.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *point_dest = dest, *s = src;
	int n = 0,  i;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	while (*dest != '\0')
		(dest)++;
	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;
		(dest)++;
		(src)++;
	}
	*dest = '\0';
	return (point_dest);
}
