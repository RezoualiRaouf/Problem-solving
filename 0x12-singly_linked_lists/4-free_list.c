#include "lists.h"
/**
 *free_list - frees a list.
 *@head: the head of the linked list.
 */

void free_list(list_t *head)
{
list_t *current = head;

while (current != NULL)
{
	free(current->len);
	free(current->str);
	free(current);
	current = current->next;
}
}
