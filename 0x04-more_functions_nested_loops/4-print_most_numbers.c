#include "main.h"

/**
  * print_most_numbers - prints the numbers 01356789 using _putchar
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 || i != 4)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
