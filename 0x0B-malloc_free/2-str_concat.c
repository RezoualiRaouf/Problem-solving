#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to a newly allocated space in memory containing
 *         the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *ss = s2, *s = s1, *back;
int i = 0, j = 0, size2 = 0, size1 = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (*ss != '\0')
	ss++, size2++;
while (*s != '\0')
	s++, size1++;
back = malloc(sizeof(char) * (size2 + size1 + 1));
if (back == NULL)
	return (NULL);
while (i < size1)
{
	back[i] = s1[i];
	i++;
}
while (i < (size2 + size1))
{
	back[i] = s2[j];
	i++;
	j++;
}
return (back);
}
