#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints numbers from 01 to 98
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i <= 7 ; i++)
	{
		for (j = i+1 ; j <= 8 ; j++)
		{
			for (k = i+2 ; k <= 9 ; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7 || j < 8 || k < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
