#include "main.h"
/**
 * flip_bits - returns the number of times a bit can be flipped
 * @n: input string
 * @m: index
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value != 0)
	{
		if (xor_value & 1)
			count++;
		xor_value >>= 1;
	}

	return (count);
}
