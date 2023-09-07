#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         or terminates the program with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
void *points = malloc(b);

if (points == NULL)
{
	exit(98);
}
return (points);
}
