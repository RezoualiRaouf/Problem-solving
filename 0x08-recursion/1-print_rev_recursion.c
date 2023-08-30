#include "main.h"
/**
 *
 *
 */
void _print_rev_recursion(char *s)
{
	static int n = 0; 
	char *ss = s;

	if (n == 0)
	{
		while (*ss != '\0')
		{
			n++;
			ss++;
		}
		n--;
	}
	_putchar(s[n]);
	n--;
	if (n == 0)
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s);
}
