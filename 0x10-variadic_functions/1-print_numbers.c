#include "variadic_functions.h"
/**
 * print_numbers - Prints a variable number of integers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 * @...: The integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int prnum;
va_list ptlist;

if (n == 0)
	return;
va_start(ptlist, n);
for (i = 0 ; i < n ; i++)
{
	prnum = va_arg(ptlist, int);
	if (i < n - 1)
	{
		printf("%d", prnum);
		if (separator != NULL)
			printf("%s", separator);
	}
	else
		printf("%d\n", prnum);
}
}
