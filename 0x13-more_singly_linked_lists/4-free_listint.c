#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: Pointer of structure listint_t for beginning
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
