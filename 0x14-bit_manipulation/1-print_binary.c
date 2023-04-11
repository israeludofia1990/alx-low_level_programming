#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int div;

	if (n > 1)
		print_binary(n >> 1);
	div = n & 1;
	_putchar(div + '0');
}
