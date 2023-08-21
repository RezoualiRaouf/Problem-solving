#include "main.h"
/**
 *print_rev - prints a string int revers
 *@s: pointes to string
 */
void print_rev(char *s)
{
char *g = s;
while (*g != '\0')
	g++;
while (g != s)
{
g--;
_putchar(*g);
}
_putchar('\n');
}
