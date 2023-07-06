#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - deletes node
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (*head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	head = NULL;
}
