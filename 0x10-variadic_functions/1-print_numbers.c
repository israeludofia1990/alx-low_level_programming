#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints `n` numbers given, separated by a given separator
 * @separator: Pointer to the first character of the string to separate each
 * integer
 * @n: Number of integers of the given integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
