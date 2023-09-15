#include "variadic_functions.h"
/**
 * print_int - Print an integer.
 * @ptlist: A va_list pointing to the argument.
 */

void print_int(va_list ptlist)
{
int value = va_arg(ptlist, int);
printf("%d", value);
}

/**
 * print_char - Print a character.
 * @ptlist: A va_list pointing to the argument.
 */
void print_char(va_list ptlist)
{
char value = va_arg(ptlist, int);
printf("%c", value);
}

/**
 * print_float - Print a floating-point number.
 * @ptlist: A va_list pointing to the argument.
 */
void print_float(va_list ptlist)
{
float value = va_arg(ptlist, double);
printf("%f", value);
}

/**
 * print_string - Print a string.
 * @ptlist: A va_list pointing to the argument.
 */
void print_string(va_list ptlist)
{
char *value = va_arg(ptlist, char *);
printf("%s", (value != NULL) ? value : "(nil)");
}

/**
 * print_all - Print values based on format specifiers.
 * @format: A format string containing specifiers.
 *             - 'c': char
 *             - 'i': int
 *             - 'f': float
 *             - 's': string
 *             - NULL: End of format
 */
void print_all(const char * const format, ...)
{
va_list  ptlist;
int i = 0;
const char *current_format = format;

data ar[] =  {
	{"i", print_int},
	{"c", print_char},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
};
va_start(ptlist, format);
while (*current_format)
{
	i = 0;
	while (ar[i].ch != NULL)
	{
		if (*current_format == *ar[i].ch)
		{
			ar[i].f(ptlist);
			if (*(current_format + 1) != '\0')
			{
				printf(", ");
			}
		}
	i++;
	}
current_format++;
}
va_end(ptlist);
printf("\n");
}
