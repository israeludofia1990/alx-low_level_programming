#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 *
 * @c: Number to check
 *
 * Return: 1 on success 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
