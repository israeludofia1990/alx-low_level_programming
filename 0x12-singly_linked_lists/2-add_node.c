#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node at the beginning of the list
 * @head: pointer to a pointer to the head of the list
 * @str: data to add.
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	new_node = malloc(sizeof(list_t *));
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
		new_node->next = *head;
	}
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	new_node->str = strdup(str);
	i = 0;
	for (; str[i]; i++)
		;
	new_node->len = i;

	return (new_node);
}
