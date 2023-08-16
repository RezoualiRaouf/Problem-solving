#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer value
 *
 * Return: The absolute value of n
 */
int print_last_digit(int n)
{
	int digit;

	if (n >= 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
	}
	else if (n < 0)
	{
		digit = -(n % 10);
		_putchar('0' + digit);
	}
	
	return (digit);
}
