#include "lists.h"

/**
 *free_listint - frres a list.
 *@head:The head of the linked list.
 */

void free_listint(listint_t *head)
{
listint_t *current = head;

if (head == NULL)
	return;
else
{
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
}
