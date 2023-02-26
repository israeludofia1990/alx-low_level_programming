#include "main.h"
/**
 * print_diagonal - draws a digonal line in the terminal.
 * @n: number of '_' to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int col;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		col = 1;
		while (col <= n)
		{
			space = 1;
			while (space < col)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			col++;
		}
	}
}
