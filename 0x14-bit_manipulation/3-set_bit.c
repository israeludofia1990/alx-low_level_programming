#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets bit to 1
 * @n: input string
 * @index: position
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	mask <<= index;
	*n |= mask;
	return (1);


	return (0);
}
