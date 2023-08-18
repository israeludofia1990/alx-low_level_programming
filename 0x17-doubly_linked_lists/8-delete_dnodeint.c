#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the address of the head of listint_t list.
 * @index: The index of the node to be deleted
 * Return: On success (1) or failure (-1).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	else
	{
		count = 0;
		while (current != NULL && count < index)
		{
			previous = current;
			current = current->next;
			count += 1;
		}
		if (current == NULL)
			return (-1);
		previous->next = current->next;
		if (current->next != NULL)
			current->next->prev = previous;
		free(current);
	}
	return (1);
}
