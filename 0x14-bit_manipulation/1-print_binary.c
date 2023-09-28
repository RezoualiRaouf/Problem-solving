#include "main.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n:the number to convert.
 */
void print_binary(unsigned long int n)
{
unsigned long int *tab;
int i, j = 0;

tab = (unsigned long int *)malloc(sizeof(unsigned long int) * 8);
if (tab == NULL)
	return;
if (n == 0)
	_putchar('0');
else
{
	while (n != 0)
	{
		tab[j] = n % 2;
		n /= 2;
		j++;
	}
}
for (i = j - 1 ; i >= 0 ; i--)
	_putchar(tab[i] + '0');
free(tab);
}
