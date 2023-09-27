#include "lists.h"
/**
 * delete_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index at which to insert the new node.
 * Return: If the function fails -1 Otherwise 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *next = *head;
listint_t *back = *head;
unsigned int size = 0, i;

	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	if (index > size)
		return (-1);
	if (index == 0)
	{
		next = next->next;
		*head = next;
		back->next = NULL;
	}
	else if (index == size)
	{
		for (i = 0 ; i < index - 2; i++)
			back = back->next;
		back->next = NULL;
		*head = back;
	}
	else if (index == size - 1)
	{
		for (i = 0 ; i < index ; i++)
		{
			if (index - 1 > i)
				back = back->next;
			next = next->next;
		}
		back->next = next->next;
		next->next = NULL;
		free(next);
	}
	return (1);
}
