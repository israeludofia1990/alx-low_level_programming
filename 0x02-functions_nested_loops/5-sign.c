#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Return: 1 if n >= 1, 0 if n == 0, -1 if n < 1
 *
 * @n: number to be checked
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
