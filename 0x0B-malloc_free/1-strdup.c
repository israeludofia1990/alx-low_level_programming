#include <stdlib.h>
#include "main.h"
/* #include <stdio.h> */

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str)
{
	int i;
	char *s;
	int l;

	if (str == NULL)
		return (NULL);

	l = 1;
	while (str[l])
		l++;
	s = (char *)malloc(sizeof(char) * 1 + l);
	if (s == NULL)
		return (0);

	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
