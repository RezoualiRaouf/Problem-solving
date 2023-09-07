#include <stdlib.h>
#include "main.h"
/**
 * _memset - Set the memory pointed to by s to the specified value
 * @s: Pointer to the memory to be filled
 * @b: Value to set the memory to
 * @n: Number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
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
