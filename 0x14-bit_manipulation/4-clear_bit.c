#include "main.h"
#include <stddef.h>
/**
 * clear_bit - sets bit to 1
 * @n: input string
 * @index: position
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	mask <<= index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
