#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: the head of the list
 * @n: the data of new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
		return (NULL);
	nnode->n = n;
	if (!*head)
	{
		*head = nnode;
		return (nnode);
	}
	nnode->next = *head;
	nnode->prev = NULL;
	(*head)->prev = nnode;
	*head = nnode;
	return (nnode);
}
