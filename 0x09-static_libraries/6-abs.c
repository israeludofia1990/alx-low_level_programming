#include "main.h"

/**
 * _abs - returns absolute value of a number
 * @n: An integer number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	int convert;

	if (n < 0)
	{
		convert = n * -1;
	}
	else
	{
		convert = n;
	}
	return (convert);
}
