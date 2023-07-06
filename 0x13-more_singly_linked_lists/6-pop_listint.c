#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head  node
 * @head: head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
