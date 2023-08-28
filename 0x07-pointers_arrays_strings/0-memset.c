#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 *@s:pointes to a string.
 *@b:constant byte.
 *@n: the first n bytes of the memory area.
 *Return:pointer to the result.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ss = s;
while (n > 0)
{
	*s = b;
	s++;
	n--;
}
	return (ss);
}
