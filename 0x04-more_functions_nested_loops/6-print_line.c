#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the charater _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
