#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: The key you are looking for
 * Return: the value associated with the ele, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	n = ht->array[i];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;
	if (n == NULL)
		return (NULL);
	else
		return (n->value);
}
