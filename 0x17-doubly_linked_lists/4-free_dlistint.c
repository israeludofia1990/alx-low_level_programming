#include "lists.h"
/**
 * free_dlistint_t - deletes node
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tmp;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
		if (tmp != NULL)
			tmp->prev = NULL;
	}
}
