#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@l:pointes to a string.
 * Return: the result pointer to string.
 */
char *string_toupper(char *l)
{
char letter;
char *back = l;
while (*l != '\0')
{
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (*l == letter)
			*l = letter - 32;
	}
	l++;
}
return (back);
}
