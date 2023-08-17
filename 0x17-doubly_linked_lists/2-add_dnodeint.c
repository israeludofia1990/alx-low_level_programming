#include "lists.h"
/**
 * add_dnodeint - preppends a node
 * @head: Beginning of list
 * @n: data field
 * Return: newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
