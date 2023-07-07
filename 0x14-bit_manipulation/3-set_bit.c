#include "main.h"
/**
 * set_bit - sets a bit at a particular position
 * @n: number
 * @index: position
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, setbit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	setbit = *n | mask;
	*n = setbit;
	return (1);
}
