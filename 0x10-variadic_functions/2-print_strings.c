#include "variadic_functions.h"
/**
 * print_strings - Prints a variable number of chars
 * @n: The number of chars to print
 * @separator: The string to be printed between numbers
 * @...: The chars to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptlist;
unsigned int i;
char *s;

va_start(ptlist, n);
for (i = 0 ; i < n ; i++)
{
	s = va_arg(ptlist, char*);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	if (separator != NULL && i < n - 1)
		printf("%s", separator);
}
printf("\n");
va_end(ptlist);
}
