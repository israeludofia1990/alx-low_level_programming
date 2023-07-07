#include "main.h"
/**
 * clear_bit - clears bit
 * @n: number
 * @index: position
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, flip;

	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;
	flip = ~mask;
	*n &= flip;
	return (1);
}
