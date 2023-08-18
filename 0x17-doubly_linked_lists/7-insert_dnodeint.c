#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node in the postion
 * @h: Pointer to direction of the head
 * @n: The data integer
 * @idx: Position at the insert the new node
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tmp->next;
	node->prev = tmp;
	tmp->next = node;
	tmp->next->prev = node;

	return (node);
}
