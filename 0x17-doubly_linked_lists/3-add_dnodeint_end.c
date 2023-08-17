#include "lists.h"
/**
 * add_dnodeint_end - Appends a node
 * @head: Beginning of list
 * @n: Data field
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
		newnode->prev = tmp;
	}
	return (newnode);
}
