#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum_total = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum_total += tmp->n;
		tmp = tmp->next;
	}

	return (sum_total);
}
