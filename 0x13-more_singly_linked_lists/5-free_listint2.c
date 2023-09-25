#include "lists.h"

/**
 *free_listint2 - frres a list.
 *@head:The head of the linked list.
 */

void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *next;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
