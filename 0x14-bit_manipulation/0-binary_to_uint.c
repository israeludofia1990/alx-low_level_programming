#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	char *copy_b;
	unsigned int dec = 0;
	unsigned int j;

	if (b == NULL)
		return (0);
	copy_b = strdup(b);
	if (copy_b == NULL)
	{
		return (0);
	}
	for (i = 0; copy_b[i] != '\0'; i++)
	{
		if (copy_b[i] != '0' && copy_b[i] != '1')
			return (0);
	}
	/** printf("the value of i is %u\n", i); */
	j = 0;
	while (i--)
	{
		if (copy_b[i] & 1)
		{
			dec += 1 << j;
		}
		j++;
	}
	free(copy_b);
	return (dec);
}
