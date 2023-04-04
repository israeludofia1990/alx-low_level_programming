#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: beginning of the list
 * @index: node to return
 * Return: pointer to listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	i = 0;
	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
