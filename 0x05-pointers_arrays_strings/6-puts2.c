#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print its characters
 */
void puts2(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
