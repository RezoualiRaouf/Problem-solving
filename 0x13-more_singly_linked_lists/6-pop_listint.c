#include "lists.h"

/**
 *pop_listint -  deletes the head node of a listint_t linked list.
 *@head:The head of the limked list.
 *
 *Return: the head node’s data (n),if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
listint_t *current = *head;
listint_t *next = *head;
int n;
	if (head == NULL)
		return (0);
next = next->next;
*head = next;
current->next = NULL;
n = current->n;
free(current);
return (n);
}
