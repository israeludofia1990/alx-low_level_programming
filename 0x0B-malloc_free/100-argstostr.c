#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
/**
 * argstostr - concatenates strings
 * @ac: argument count
 * @av: argument vector
 * Return: character pointer
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int local_len = 0;
	int i, j, pos;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_len += _str_len(av[i]) + 1;
	}

	result = malloc(total_len + 1 * (sizeof(char)));
	if (result == NULL)
		return (NULL);
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		local_len = _str_len(av[i]);
		for (j = 0; j < local_len; j++)
		{
			result[pos] = av[i][j];
			pos++;
		}
		result[pos] = '\n';
		pos++;
	}
	result[pos] = '\0';
	return (result);
}
