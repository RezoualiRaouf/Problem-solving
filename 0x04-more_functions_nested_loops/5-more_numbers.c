#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 to 14 ,10 times
 * each time on a new line
 */
void more_numbers(void)
{
int i, l, j;

for (i = 0 ; i <= 9 ; i++)
{
	for (l = 0 ; l <= 1 ; l++)
	{
		for (j = 0 ; j <= (l == 0 ? 9 : 4) ; j++)
		{
			if (l == 1)
			{
			_putchar(l + '0');
			}
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}

}
