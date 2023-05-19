#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *frhd;

	while (head)
	{
		frhd = head->next;
		free(head);
		head = frhd;
	}
}
