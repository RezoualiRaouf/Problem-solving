#include "main.h"

/**
  * print_alphabet - prints the letters from a to z using _putchar
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
