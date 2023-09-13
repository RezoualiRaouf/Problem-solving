#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: Pointes to an array.
 * @size: The size of a given array.
 * @action: Pointes to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (size <= 0 || action == 0)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
