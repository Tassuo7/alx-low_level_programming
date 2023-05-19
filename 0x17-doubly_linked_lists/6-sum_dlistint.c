#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of a list
 * @head: the head
 * Return: the sum of all the data of a list or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	unsigned int ns = 0;

	if (!head)
		return (0);
	while (node)
	{
		ns += node->n;
		node = node->next;
	}
	return (ns);
}
