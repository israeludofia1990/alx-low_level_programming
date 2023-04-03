#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Rturns the number of elements of a listint_t list.
 * @h: beginning of list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
