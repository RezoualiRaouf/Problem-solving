#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the newly allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **matrix, i;

if (width <= 0 || height <= 0)
	return (NULL);
matrix = calloc(height, sizeof(int));
if (matrix == NULL)
	return (NULL);
for (i = 0 ; i < height ; i++)
	matrix[i] = calloc(width, sizeof(int));
if (matrix[i])
	return (NULL);
return (matrix);
}
