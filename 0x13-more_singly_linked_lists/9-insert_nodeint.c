#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value to store in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
listint_t *next = *head;
listint_t *back = *head;
listint_t *new;
unsigned int size = 0, i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	if (idx > size)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0 ; i < idx ; i++)
		{
		if (idx - 1 > i)
			back = back->next;
		next = next->next;
		}
		new->next = next;
		back->next = new;
	}
return (new);
}
