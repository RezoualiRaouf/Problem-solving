#include "main.h"
/**
 *cap_string - capitalize letter in a string.
 *@l: pointes to a string.
 *Return: a pointer to the result.
 */
char *cap_string(char *l)
{
int i, j, n = 0;
char *t = "\n\t ,.;{}()\"";
char *s = l, *back = l;

while (*s != '\0')
{
	n++;
	s++;
}
for (j = 0 ; j < n ; j++)
{
	i = 0;
	while (t[i] != '\0')
	{
		if (l[j] == t[i])
		{
			if (l[j + 1] >= 'a' && l[j + 1] <= 'z')
			{
				l[j + 1] = l[j + 1] - 32;
			}
		break;
		}
	i++;
	}
}
return (back);
}
