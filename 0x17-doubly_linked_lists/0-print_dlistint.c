#include "lists.h"
/**
 * print_dlistint - prints element from doubly linked list
 * @h: beginning doubly linke list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count +=1;
		h = h->next;
	}
	return (count);
}
