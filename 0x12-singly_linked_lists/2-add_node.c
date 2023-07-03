#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node - preppends a node
 * @head: Beginning of list
 * @str: string to duplicate
 * Return: newnode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;

	(void)tmp;
	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
