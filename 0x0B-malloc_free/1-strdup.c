#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the newly allocated string.
 */
char *_strdup(char *str)
{
char *sback, *ss = str;
int i = 0, size = 0;
if (str == NULL)
	return (NULL);
else
{
	while (*ss != '\0')
	{
		ss++;
		size++;
	}
	sback = malloc(sizeof(char) * size);

	if (sback == NULL)
		return (NULL);


	while (i < size)
	{
		sback[i] = str[i];
		i++;
	}
	return (sback);
}
}
