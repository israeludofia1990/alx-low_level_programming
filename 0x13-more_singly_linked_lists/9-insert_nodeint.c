#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - prints a list
 * @h: head
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i;
	size_t len = listint_len(*head);

	if (idx > len)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		tmp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			tmp = tmp->next;
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}
