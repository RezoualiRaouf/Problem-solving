#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: The head of the linked list.
 *
 *Return:returns the sum  of all the data (n) of a listint_t linked list
 *	 , if the node is empty return 0.
 */

int sum_listint(listint_t *head)
{
listint_t *current = head;
unsigned int n = 0;

if (head != NULL)
{
	while (current != NULL)
	{
		n += current->n;
		current = current->next;
	}
}
else
	return (0);
return (n);
}
