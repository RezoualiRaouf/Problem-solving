#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: Pointer to the first occurrence of
 *         the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char **s = &haystack, *h, *n;

while (*haystack)
{
	h = haystack;
	n = needle;

	while (*n && *h == *n)
	{
		n++;
		h++;
	}
		if (*n == '\0')
			return (*s);
haystack++;
}
return (NULL);
}
