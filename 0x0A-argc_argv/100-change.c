#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int cent = 0, back = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cent = atoi(argv[1]);
		if (cent <= 0)
			printf("0\n");
		else
		{
			if (cent >= 25)
			{
				back += cent / 25;
				cent %= 25;
			}
			if (cent >= 10)
			{
				back += cent / 10;
				cent %= 10;
			}
			if (cent >= 5)
			{
				back += cent / 5;
				cent %= 5;
			}
			if (cent >= 2)
			{
				back += cent / 2;
				cent %= 2;
			}
			if (cent >= 1)
			{
				back += cent / 1;
				cent %= 1;
			}
		}
		printf("%d\n", back);
	}
return (0);
}
