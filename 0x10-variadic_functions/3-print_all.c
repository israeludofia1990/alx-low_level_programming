#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * is_valid - checks if a character is valid
 * @h: character to check
 * Return: char
 */
char is_valid(char h)
{
	return (h == 'c' || h == 'i' || h == 's' || h == 'f');
}
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	char *tmp;

	va_start(list, format);


	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (i != 0 && is_valid(format[i]))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				tmp = va_arg(list, char *);
				if (tmp == NULL)
					tmp = "(nil)";
				printf("%s", tmp);
				break;
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
