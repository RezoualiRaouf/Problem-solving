#include "main.h"
/**
 * _isupper - Checks if a character is a uppercase letter
 * @c: The character to check
 *
 * Return: 1 if c is a upperrcase letter, 0 otherwise
 */
int _isupper(int c)
{
char letter, count;

count = 0;
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
