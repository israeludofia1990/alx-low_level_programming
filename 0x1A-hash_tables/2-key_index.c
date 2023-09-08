#include "hash_tables.h"
/**
 * key_index - returns  the index of a key.
 * @key: Key
 * @size: size
 * Return: long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
