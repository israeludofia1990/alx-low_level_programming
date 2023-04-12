#include "main.h"
/**
 * get_bit - returns index of a given position
 * @n: input string
 * @index: position
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shifted;

	if (n == 0)
		return (-1);
	shifted = n >> index;
	return (shifted & 1);
}
