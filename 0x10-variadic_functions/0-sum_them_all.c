#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all argument
 * @n: number of arguments
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	unsigned int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		sum = sum + x;
	}
	va_end(ap);
	return (sum);
}
