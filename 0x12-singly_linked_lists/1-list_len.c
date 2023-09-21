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
