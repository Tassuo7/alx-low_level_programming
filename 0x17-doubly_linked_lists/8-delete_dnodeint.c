#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at given index
 * @head: the head of the list
 * @index: index to delete node
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);

	while (node != NULL)
	{
		if (i == index)
		{
			if (index != 0)
				node->prev->next = node->next;
			else
				*head = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			free(node);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
