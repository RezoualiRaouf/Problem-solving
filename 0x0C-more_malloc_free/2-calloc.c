#include <stdlib.h>
#include "main.h"
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
	char *ptr;
	int sz = 0;

if (nmemb == 0 || size == 0)
	return (NULL);
back = malloc(size * nmemb);
if (back == NULL)
	return (NULL);
ptr = (char *)back;
while (ptr[sz] != '\0')
	ptr[sz] = 0, sz++;

return (back);
}
