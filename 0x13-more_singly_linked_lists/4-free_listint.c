#include "lists.h"

/**
 *free_listint - frres a list.
 *@head:The head of the linked list.
 */

void free_listint(listint_t *head)
{
listint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
