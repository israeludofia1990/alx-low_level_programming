#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of items to add
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
