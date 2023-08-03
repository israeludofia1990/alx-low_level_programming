#include "main.h"
/**
 * flip_bits - flips a bit
 * @n: first number
 * @m: second nmber
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask, result = 0;

	mask = n ^ m;
	while (mask > 0)
	{
		result += mask & 1;
		mask = mask >> 1;
	}
	return (result);
}
