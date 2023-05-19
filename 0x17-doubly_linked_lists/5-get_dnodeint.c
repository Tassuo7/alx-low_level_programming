#include "lists.h"
/**
 * get_dnodeint_at_index -  make nth node of a dlistint_t linked list
 * @head: the head
 * @index: the nth node index
 * Return: the nth node of a list or if not exist NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
