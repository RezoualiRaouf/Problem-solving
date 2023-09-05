#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: Height of the grid.
 *
 * This function frees the memory allocated for the 2D grid created
 * by alloc_grid.It iterates through each row, frees the memory for
 * each row, and then frees the
 * memory for the array of pointers.
 */
void free_grid(int **grid, int height)
{
int i;

if (height <= 0 || grid == NULL)
	return;
for (i = 0 ; i < height ; i++)
{
	free(grid[i]);
}
free(grid);
}
