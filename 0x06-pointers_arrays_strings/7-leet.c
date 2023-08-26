#include "main.h"
/**
 * leet - replaces the letters a A e E o O t T l L with numbers.
 *@l: pointes to a string.
 * Return: pointer to  the string  result.
 **/
char *leet(char *l)
{
int i;
char *back = l;

for (i = 0 ; l[i] != '\0' ; i++)
{
if (l[i] == 'a' || l[i] == 'A')
	l[i] = '4';
else if (l[i] == 'e' || l[i] == 'E')
	l[i] = '3';
else if (l[i] == 'o' || l[i] == 'O')
	l[i] = '0';
else if (l[i] == 't' || l[i] == 'T')
	l[i] = '7';
else if (l[i] == 't' || l[i] == 'L')
	l[i] = '1';
}
return (back);
}
