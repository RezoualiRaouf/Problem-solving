#include "variadic_functions.h"
/**
 * sum_them_all - Sums a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to be summed.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ptlist;
unsigned int i;
int sum = 0;
if (n == 0)
	return (0);
va_start(ptlist, n);
for (i = 0 ; i < n ; i++)
	sum += va_arg(ptlist, int);
va_end(ptlist);
return (sum);
}
