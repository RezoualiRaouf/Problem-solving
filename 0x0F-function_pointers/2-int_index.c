#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer.
 * @array:Ppointes to an arrray.
 * @size: Size of a given array.
 * @cmp: Pointes to a function.
 * Return: index of an element in array of intigers, or -1 if no matches found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, index, find = 0;

if (array == NULL || cmp == NULL)
	return (-1);
if (size <= 0)
	return (-1);
for (i = 0 ; i < size ; i++)
{
	index = i;
	if (cmp(array[i]) != 0)
	{
		find = 1;
		break;
	}
}
if (!find)
	return (-1);
return (index);
}
