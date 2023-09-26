#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: The head of the linked list.
 *@index: The index of the node.
 *
 *Return:returns the nth node of a listint_t linked list, if the node
 *        does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
listint_t *here = head;
unsigned int n = 0, i;

while (current != NULL)
{
	current = current->next;
	n++;
}
if (index <= n)
{
	for (i = 0 ; i < index ; i++)
		here = here->next;
}
else
	return (NULL);
return (here);
}
