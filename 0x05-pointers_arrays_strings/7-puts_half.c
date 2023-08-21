#include "main.h"
/**

 */
void puts_half(char *str)
{
	int l = 0;
	char *p = str;

while (*p != '\0')
{
	l++;
	p++;
}
if (l % 2 == 0)
	p = str + (l / 2);
else
	p = str + (l - 1) / 2;
while (*p != '\0')
{	
	_putchar(*p);
	p++;
}
_putchar('\n');
}
