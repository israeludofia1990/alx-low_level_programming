#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_nodeint_end - Appends a node
 * @head: Beginning of list
 * @n: Data field
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

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
	}
	return (newnode);
}
