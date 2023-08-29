#include "main.h"
/**
 *_strspn - gets the length of a prefix substring.
 *@s:pointes to a string.
 *@accept:pointes to a string.
 *Return:nember of bytes n.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, j, found = 0;

	for (; *s != '\0' ; s++)
	{
		found = 0;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (*s == accept[j])
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (n);
}
