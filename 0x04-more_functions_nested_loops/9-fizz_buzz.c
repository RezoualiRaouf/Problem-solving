#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function implements the FizzBuzz problem, printing
 * numbers from 1 to 100 with specific replacements.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100 ; i++)
{
	if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
