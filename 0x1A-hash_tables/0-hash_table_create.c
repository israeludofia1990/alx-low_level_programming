#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: Hash table size
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *newptr;

	newptr = malloc(sizeof(hash_table_t));
	if (newptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	newptr->size = size;
	newptr->array = malloc(sizeof(hash_node_t *) * size);
	if (newptr->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(newptr);
		return (NULL);
	}
	for (; i < size; i++)
	{
		newptr->array[i] = NULL;
	}
	return (newptr);
}
