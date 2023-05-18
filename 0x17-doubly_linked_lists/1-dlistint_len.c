#include "lists.h"
/**
 * dlistint_len -  fonction of the number of elements in a list
 * @h: head of the linked list
 * Returns: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
