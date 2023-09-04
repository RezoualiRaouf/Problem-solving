#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and
 *                initializes it with a specific char.
 *@size:the size of the array.
 *@c:chars in the array.
 *Return:NULL if size is less then 0 and if ar equal to NULL, char pointer ar
 *       if success.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;
	if (size == 0)
		return (NULL);
	else
	{
		ar = malloc(sizeof(char) * (size + 1));
		if (ar == NULL)
			return (NULL);
		else
			{
				while (i < size)
				{
					ar[i] = c;
					i++;
				}
				ar[i] = '\0';
			}
	}	
return (ar);
}
