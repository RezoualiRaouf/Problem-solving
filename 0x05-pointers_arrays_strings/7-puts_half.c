#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int l = 0, mid;
	char *p = str;

while (*p != '\0')
{
	l++;
	p++;
}
mid = l / 2;
if (l % 2 == 0)
	p = str + mid;
else
	p = str + mid + 1;
while (*p != '\0')
{
	_putchar(*p);
	p++;
}
_putchar('\n');
}
