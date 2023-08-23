#include "main.h"
/**
 * _strncat - concatenates tow strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of bytes.
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *point_dest = dest, *s = src;
	int m = 0,  i, length;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	while (*dest != '\0')
		(dest)++;
	if (n > m)
		length = m;
	else
		length = n;
	for (i = 0 ; i < length ; i++)
	{
		*dest = *src;
		(dest)++;
		(src)++;
	}
	*dest = '\0';
	return (point_dest);
}
