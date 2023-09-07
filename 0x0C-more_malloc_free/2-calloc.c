#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;
return (ptr);
}
/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *back;

if (nmemb == 0 || size == 0)
	return (NULL);
back = malloc(sizeof(int) * nmemb);
if (back == NULL)
	return (NULL);
_memset(back, 0, sizeof(int) * nmemb);
return (back);
}
