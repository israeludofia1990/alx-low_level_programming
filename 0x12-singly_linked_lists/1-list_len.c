#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - prints a list
 * @h: head
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
