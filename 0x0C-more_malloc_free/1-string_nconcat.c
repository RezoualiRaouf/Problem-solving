#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenate two strings up to n bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *back;
unsigned int i = 0, j = 0, size2 = 0, size1 = 0;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";
while (s2[size2])
	size2++;
while (s1[size1])
	size1++;
if (n >= size2)
	n = size2;
back = malloc(sizeof(char) * (n + size1) + 1);
if (back == NULL)
	return (NULL);
while (i < size1)
	back[i] = s1[i], i++;
while (i < (size1 + n))
	back[i] = s2[j], i++, j++;
back[i] = '\0';
return (back);
}
