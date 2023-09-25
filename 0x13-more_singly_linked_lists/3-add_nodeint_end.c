#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the beginning of a listint_t list.
 *@head: The head of a given list.
 *@n: Given integer;
 *
 *Return: the address of the new element, or NULL if it failed.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current = *head;
listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
return (new);
}
