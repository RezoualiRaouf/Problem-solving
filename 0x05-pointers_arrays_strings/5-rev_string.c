#include "main.h"
/**
 *rev_string - reverses a string
 *@s: points to a string
 */
void rev_string(char *s)
{
int n = 0, i;
char *p = s, temp;

while (*p != '\0')
{
	n++;
	p++;
}
p--;
for (i = 0 ; i < n / 2 ; i++)
{
	temp = *s;
	*s = *p;
	*p = temp;
	s++;
	p--;
}
}
