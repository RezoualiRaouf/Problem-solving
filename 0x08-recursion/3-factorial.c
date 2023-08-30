#include "main.h"
/**
 *factorial - returns the factorial of a given number.
 *@n:integer to calculate the factorial.
 *Return:If n is lower than 0, the function should return -1
 *       to indicate an error Factorial of 0 is 1
 */
int factorial(int n)
{
	int fec = 0;
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (fec = n * factorial(n - 1));
}
