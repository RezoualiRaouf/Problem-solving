#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b:pointes to binary number
 *
 *Return: the converted number, or 0 if there is one or more chars in
 *       the string b that is not 0 or 1 and if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0, i = 0;

if (b == NULL)
	return (0);
while (b[i] != '\0')
{
	if (b[i] == '0')
		sum = sum * 2 + 0;
	else if (b[i] == '1')
		sum = sum * 2 + 1;
	else
		return (0);
	i++;
}
return (sum);
}
