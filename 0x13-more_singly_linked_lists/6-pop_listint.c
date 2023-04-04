#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * pop_listint - deletes head node
 * @head: node to delete
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
