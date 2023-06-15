#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hn;
	unsigned long int p;
	int n = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (p = 0; p < ht->size; p++)
	{
		hn = ht->array[p];
		while (hn != NULL)
		{
			if (n)
				n = 0;
			else
				printf(", ");
			printf("'%s': '%s'", hn->key, hn->value);
			hn = hn->next;
		}
	}
	printf("}\n");
}
