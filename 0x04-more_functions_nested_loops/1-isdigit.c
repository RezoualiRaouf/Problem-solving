#include "main.h"
/**
 * _isdigit - Checks if the input is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
int count, i;

count = 0;
for (i = '0' ; i <= '9' ; i++)
{
	if (i == c)
	{
		count++;
	}
}
	return (count);
}
