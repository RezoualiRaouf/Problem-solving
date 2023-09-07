#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers from min to max
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: A pointer to the allocated array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int size, i, j = 0;
	int *back;

	if (min > max)
		return (NULL);
	if (min == max)
		exit(0);
	size = max - min;
	back = malloc(sizeof(int) * size + 1);
	if (back == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++)
		back[j] = i, j++;
	return (back);
}
