#include "main.h"
/**
 * print_square - prints a square using the character #
 *
 * @size: size of square
 *
 * Return: Void
 */
void print_square(int size)
{
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 1;
		while (row <= size)
		{
			col = 1;
			while (col <= size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
}
