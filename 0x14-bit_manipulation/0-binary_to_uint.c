#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: string of numbers
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
			res = (res << 1) + 0;
		else if (*b == '1')
			res = (res << 1) + 1;
		else
			return (0);
		b++;
	}
	return (res);
}
