#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: pointer to a char
*/
char *_strdup(char *str)
{

	char *str_dup;
	char *tmp;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	len = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}
	str_dup = malloc(len * sizeof(char) + 1);
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
