#include "main.h"
/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to check
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _islower(int c)
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
	return (count);
	_putchar('\n');
}
