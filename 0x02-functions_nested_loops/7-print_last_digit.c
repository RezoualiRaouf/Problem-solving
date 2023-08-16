#include "main.h"
/**
 * print_last_digit - Prints the last digit of an integer.
 * @n: The integer whose last digit is to be printed.
 *
 * Return: The last digit of the integer.
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
