#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees all the nodes in a list
 * @head: node to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
