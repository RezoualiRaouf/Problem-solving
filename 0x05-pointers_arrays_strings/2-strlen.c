#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: pointes to string
 *Return:The length of the string
 */
int _strlen(char *s)
{
int h = 0;
while (*s != '\0')
{
	h++;
	s++;
}
return (h);
}
