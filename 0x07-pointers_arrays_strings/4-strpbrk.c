#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s:pointes to a string.
 *@accept:pointes to a string.
 *Return:pointer to the byte in s that matches one of the bytes
 *       in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char **ss = &s;
int j;

for (; *s != '\0' ; s++)
{
	j = 0;
	for (j = 0 ; accept[j] != '\0' ; j++)
	{
		if (*s == accept[j])
			return (*ss);
	}
}
return (NULL);
}
