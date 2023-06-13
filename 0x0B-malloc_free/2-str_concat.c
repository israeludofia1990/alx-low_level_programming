#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: destination string
 * @s2: source string
 * Return: character pointer
*/

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, i, j;
	char *new_space;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = _str_len(s1);
	len_s2 = _str_len(s2);

	new_space = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (new_space == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_space[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_space[i + j] = s2[j];
		j++;
	}
	new_space[i + j] = '\0';
	return (new_space);
}
/**
 * _str_len - returns length of string
 * @str: input string
 * Return: integer
*/
int _str_len(char *str)
{
	char *tmp;
	int len = 0;

	tmp = str;
	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}
	return (len);
}
