#include "main.h"
/**
 * print_square - Print a square, followed by a new line
 * @size: Number of times the character # to be printed
 */
void print_square(int size)
{
int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
