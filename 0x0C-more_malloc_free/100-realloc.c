#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _memcpy - Copies memory area
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _realloc - implements realloc()
 * @ptr: input pointer
 * @old_size: old size
 * @new_size: new size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int min;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	min = (old_size < new_size) ? old_size : new_size;
	new_p = malloc(new_size);
	 _memcpy(new_p, ptr, min);

	free(ptr);
	return (new_p);
}
