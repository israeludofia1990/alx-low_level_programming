#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts node at a given index
 * @idx: node index
 * @n: node data to insert
 * @head: beginning of list
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new;
	unsigned int count = 0;
	listint_t *tmp1;

	for (tmp1 = *head; tmp1 != NULL; tmp1 = tmp1->next)
		count++;
	if (idx > count)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		(*head)->n = n;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		if (idx - 1 == i)
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
	free(tmp);
}
