#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: the hash table you want to add the key/value to
 * @key: The key
 * @value: The value associated with key.
 * Return: 1 if it secceeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hn;
	char *keyy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	keyy = strdup(value);
	if (keyy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = keyy;
			return (1);
		}
	}

	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
	{
		free(keyy);
		return (0);
	}
	new_hn->key = strdup(key);
	if (new_hn->key == NULL)
	{
		free(new_hn);
		return (0);
	}
	new_hn->value = keyy;
	new_hn->next = ht->array[index];
	ht->array[index] = new_hn;

	return (1);
}
