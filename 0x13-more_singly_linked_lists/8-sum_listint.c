#include <stddef.h>
#include "lists.h"
/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list
 * @head: beginning of list
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
