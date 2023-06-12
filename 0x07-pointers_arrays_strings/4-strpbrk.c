#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - returns first occurance of any character
 * @s: string
 * @accept: string to traverse
 * Return: pointer to a char
*/
char *_strpbrk(char *s, char *accept)
{
	char *current_s;

	while (*s != '\0')
	{
		current_s = accept;
		while (*current_s != '\0')
		{
			if (*current_s == *s)
			{
				return ((char *)s);
			}
			current_s++;
		}
		s++;
	}
	return (NULL);
}
