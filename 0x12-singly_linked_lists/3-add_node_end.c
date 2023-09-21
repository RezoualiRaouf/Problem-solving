#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: The head of the list.
 *
 *Return: the number of elements in a given list.
 */

size_t list_len(const list_t *h)
{
size_t n = 0;
const list_t *proto = h;

	while (proto != NULL)
	{
		n++;
		proto = proto->next;
	}
return (n);
}

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: The head of the linked list.
 *@str: The string to put in the node.
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *current = *head;
list_t *new;
unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	new->len = i;
	new->next = NULL;
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
