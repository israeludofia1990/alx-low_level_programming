#include "lists.h"
#include <stdlib.h>
/**
 * free_list - deletes node
 * @head: head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *tmp;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
