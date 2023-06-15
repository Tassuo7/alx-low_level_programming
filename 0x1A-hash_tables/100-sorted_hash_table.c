#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_get - function get value with key from hash table
 * @key: the key
 * @ht: the table shash table
 * Return: the value associated with key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *sh;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	sh = ht->shead;
	while (sh != NULL && strcmp(sh->key, key) != 0)
		sh = sh->snext;
	return ((sh == NULL) ? NULL : sh->value);
}
/**
 * shash_table_create - function that create a sorted hash table
 * @size: The size of shash table
 * Description: function that creates a sorted hash table
 * Return: NULL or pointer to the sorted table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i2;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	for (i2 = 0; i2 < size; i2++)
		sht->array[i2] = NULL;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}
/**
 * shash_table_print - function that prints shash table in order
 * @ht: the shash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *shn;

	if (ht == NULL)
		return;
	shn = ht->shead;
	printf("{");
	while (shn != NULL)
	{
		printf("'%s': '%s'", shn->key, shn->value);
		shn = shn->snext;
		if (shn != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - function that delete a sorted shash table
 * @ht: the shash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *shn1, *shnb;
	shash_table_t *sh = ht;

	if (ht == NULL)
		return;
	shn1 = ht->shead;
	while (shn1)
	{
		shnb = shn1->snext;
		free(shn1->key);
		free(shn1->value);
		free(shn1);
		shn1 = shnb;
	}
	free(sh->array);
	free(sh);
}
/**
 * shash_table_print_rev - Function that prints shash table in reverse
 * @ht: the shash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *shnr;

	if (ht == NULL)
		return;
	shnr = ht->stail;
	printf("{");
	while (shnr != NULL)
	{
		printf("'%s': '%s'", shnr->key, shnr->value);
		shnr = shnr->sprev;
		if (shnr != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_set - function that adds element to shash table
 * @ht: the shash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 if succeeded 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_shn, *tmp;
	char *val_c;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_c = strdup(value);
	if (val_c == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_c;
			return (1);
		}
		tmp = tmp->snext;
	}
	new_shn = malloc(sizeof(shash_node_t));
	if (new_shn == NULL)
	{
		free(val_c);
		return (0);
	}
	new_shn->key = strdup(key);
	if (new_shn->key == NULL)
	{
		free(val_c);
		free(new_shn);
		return (0);
	}
	new_shn->value = val_c;
	new_shn->next = ht->array[index];
	ht->array[index] = new_shn;
	if (ht->shead == NULL)
	{
		new_shn->sprev = NULL;
		new_shn->snext = NULL;
		ht->shead = new_shn;
		ht->stail = new_shn;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_shn->sprev = NULL;
		new_shn->snext = ht->shead;
		ht->shead->sprev = new_shn;
		ht->shead = new_shn;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_shn->sprev = tmp;
		new_shn->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_shn;
		else
			tmp->snext->sprev = new_shn;
		tmp->snext = new_shn;
	}
	return (1);
}
