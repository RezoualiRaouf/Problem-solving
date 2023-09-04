#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes
 *               it with a specific char.
 *@size: the size of the array.
 *@c: the character to initialize the array with.
 *Return: NULL if sizie is less than or equal to 0, otherwise a
 *        pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

if (size == 0)
{
	return (NULL);
}
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
ar[i] = '\0';
return (ar);
}
