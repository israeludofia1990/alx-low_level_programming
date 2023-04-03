#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list
 * @head: Const double pointer of structure list_t for beginning
 * @n: Const int to be added
 * Return: List with new node for listint_t list, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}
