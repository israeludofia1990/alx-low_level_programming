#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value
 * @key: key is the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *c_value, *c_key;
	hash_node_t *item, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	c_value = strdup(value);
	c_key = strdup(key);
	if (c_key == NULL || c_value == NULL)
	{
		free(c_value);
		free(c_key);
		return (0);
	}
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = c_value;
			return (1);
		}
		tmp = tmp->next;
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(c_value);
		free(c_key);
		return (0);
	}
	item->value = c_value;
	item->key = c_key;
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
