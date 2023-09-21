#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints all the elements of a list_t list.
 *@h: The head for the list.
 *
 *Return: number of the elements a given list.
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t n = 0;

while (current != NULL)
{
	if (current->str == NULL)
		printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", current->len, current->str);
current = current->next;
n++;
}
return (n);
}
