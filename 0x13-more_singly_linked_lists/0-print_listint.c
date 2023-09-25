#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: The head of the given linked list.
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t n = 0;
const listint_t *current = h;

while (current != NULL)
{
	printf("%d\n", current->n);
	current = current->next;
	n++;
}
return (n);
}
