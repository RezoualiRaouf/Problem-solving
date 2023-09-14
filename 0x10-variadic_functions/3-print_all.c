#include "variadic_functions.h"
void print_int(va_list ptlist)
{
int value = va_arg(ptlist, int);
printf("%d", value);
}

void print_char(va_list ptlist)
{
char value = va_arg(ptlist, int);
printf("%c", value);
}

void print_float(va_list ptlist)
{
float value = va_arg(ptlist, double);
printf("%f", value);
}
void print_string(va_list ptlist)
{
char *value = va_arg(ptlist, char *);
if (value == NULL)
	printf("(nil)");
else
	printf("%s", value);
}
typedef struct data
{
const char *ch;
void (*f)(va_list ptlist);
}data;
void print_all(const char * const format, ...)
{
va_list  ptlist;
int i = 0;
const char * current_format = format;
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
