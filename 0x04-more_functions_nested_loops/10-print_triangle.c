#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size : size of triangle
 * Return : Void
 */
void print_triangle(int size)
{
	int row;
	int col;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 1;
		while (row <= size)
		{
			col = size - row;
			while (col >= 1)
			{
				_putchar(' ');
				col--;
			}
			hash = 1;
			while (hash <= row)
			{
				_putchar('#');
				hash++;
			}
			row++;
			_putchar('\n');
		}
	}
}
