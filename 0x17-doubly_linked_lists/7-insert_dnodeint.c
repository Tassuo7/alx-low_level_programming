#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head
 * @idx: the index of the list
 * @n: the node to insert
 * Return: the address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *nnode;
	unsigned int i = 0;

	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
		return (NULL);
	nnode->n = n;
	if (!h)
		return (nnode);
	if (idx == 0)
	{
		nnode = add_dnodeint(h, n);
		return (nnode);
	}
	while (node)
	{
		i++;
		if (i == idx)
		{
			if (node->next == NULL)
			{
				nnode = add_dnodeint_end(h, n);
				return (nnode);
			}
			nnode->prev = node;
			nnode->next = node->next;
			node->next->prev = nnode;
			node->next = nnode;
			return (nnode);
		}
		node = node->next;
	}
	return (NULL);
}
