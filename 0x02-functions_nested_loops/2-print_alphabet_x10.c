#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, each time on a new line
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0 ; i <= 9 ; i++)
{
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

}
