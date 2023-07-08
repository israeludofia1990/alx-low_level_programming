#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number to process
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1 << index;
	bit = n & mask;
	return (bit != 0);
}
