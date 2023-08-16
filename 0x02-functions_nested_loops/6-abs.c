#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @s: The integer value
 *
 * Return: The absolute value of s
 */
int _abs(int s)
{
if (s > 0)
{
	return (s);
}
else if (s == 0)
{
	return (0);
}
else
{
	return (-s);
}
}

