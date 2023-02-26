#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if ((n == 2) || (n == 4))
		{
			n++;
			continue;
		}
		else
		{
			_putchar((n % 10) + '0');
		}
		n++;
	}
	_putchar('\n');
}
