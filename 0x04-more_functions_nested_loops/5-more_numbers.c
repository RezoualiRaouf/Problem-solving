#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 to 14 ,10 times
 * each time on a new line
 */
void more_numbers(void)
{
int i, l;

for (i = 0 ; i <= 9 ; i++)
{
	for (l = 0 ; l <= 14 ; l++)
	{
		if (l >= 10)
		{
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
		}
		else
			_putchar(l + '0');
	}
	_putchar('\n');
}

}
