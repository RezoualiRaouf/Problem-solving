#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point of the program
* This function prints whether the last digit in n is greather than 5
* less than 6
* Return: Always 0(Success)
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (n < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	return (0);
}
