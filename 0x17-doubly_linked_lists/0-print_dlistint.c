#include "list.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *lv = (slistint *)h;
	size_t node = 0;

	while (lv)
	{
		printf("%d\n", lv->n);
		lv = lv->next;
		node++;
	}
	return (node);
}
