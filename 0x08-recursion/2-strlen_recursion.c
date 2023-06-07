#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: string to print
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
