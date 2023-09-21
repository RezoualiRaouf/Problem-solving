#include "lists.h"

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
			printf("[0] (nil)");
		else
			printf("[%d] %s", current->len, current->str);
	current = current->next;
	n++;
	printf("\n");
	}
return (n);
}
