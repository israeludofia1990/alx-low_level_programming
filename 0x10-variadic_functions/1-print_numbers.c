#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: amount of numbers to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, unsigned int);
		printf("%d", x);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
