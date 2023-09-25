#include "lists.h"

/**
 *listint_len - Returns the number of elements in a linked listint_t list.
 *@h: The head of the given linked list.
 *
 *Return: length of a given linked list.
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;
const listint_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
return (n);
}
