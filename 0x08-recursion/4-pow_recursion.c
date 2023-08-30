#include "main.h"
/**
 *_pow_recursion -  returns the value of x raised to the power of y.
 *@x:integer number input.
 *@y:integer number of power.
 *Return:If y is lower than 0, the function should return -1,the pow x
 *       of 0 or 0 of y is 0;
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;
if (y < 0)
	return (-1);
else if (x == 0 || y == 0)
	return (1);
else
	return (pow = x * _pow_recursion(x, y - 1));
}
