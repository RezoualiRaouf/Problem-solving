#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: The head of the linked list.
 *@str: The string to put in the node.
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = *head;
unsigned int i = 0;
	
	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new->len = i;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
