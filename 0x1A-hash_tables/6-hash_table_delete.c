#include "hash_tables.h"

/**
 * hash_table_delete - funtion that delete a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int d;
	hash_node_t *hn1, *hnb;

	if (ht == NULL)
		return;
	for (d = 0; d < ht->size; d++)
	{
		hn1 = ht->array[d];
		while (hn1 != NULL)
		{
			hnb = hn1->next;
			free(hn1->key);
			free(hn1->value);
			free(hn1);
			hn1 = hnb;
		}
	}
	free(ht->array);
	free(ht);
}
