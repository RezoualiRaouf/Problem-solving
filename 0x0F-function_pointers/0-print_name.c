#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a string as it.
 * @name: pointer to a string.
 * @f: pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
