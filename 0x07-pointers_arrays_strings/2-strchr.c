#include "main.h"
#include <stddef.h>
/**
 *_strchr -  locates a character in a string.
 *@s: pointes to a string.
 *@c:the character.
 *Return:pointer to the first occurrence of the character c in the string s
 *       or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
char **back = &s;
while (*s != '\0')
{
	if (*s == c)
		return (*back);
	s++;
}
return (NULL);
}
