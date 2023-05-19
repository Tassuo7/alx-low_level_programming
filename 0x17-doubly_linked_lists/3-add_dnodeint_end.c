#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head
 * @n: the new node
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode, *lh = *head;

	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
		return (NULL);
	nnode->n = n;
	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}
	while (lh->next != NULL)
		lh = lh->next;
	nnode->prev = lh;
	lh->next = nnode;
	return (nnode);
}
