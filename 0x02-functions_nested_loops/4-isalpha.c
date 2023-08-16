#include "main.h"
/**
 * _isalpha - Checks if the input is an alphabet
 * @c: The character to check
 *
 * Return: 1 if c is a lowercase or uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
char letter, count;

count = 0;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
	if (letter == c)
	{
		count++;
	}
}
for (letter = 'A' ; letter <= 'Z' ; letter++)
{
	if (letter == c)
	{
		count++;
	}
}
	return (count);
	_putchar('\n');
}
