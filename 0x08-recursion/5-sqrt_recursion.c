#include "main.h"

int sqrt_helper(int n, int choice);

/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int sqare_root;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		sqare_root = sqrt_helper(n, n / 2);
		if (sqare_root * sqare_root != n)
		{
			return (-1);
		}
		return (sqare_root);
	}
}
/**
 * sqrt_helper - find next choice number
 * @n: number
 * @choice: n / 2
 * Return: integer
 */
int sqrt_helper(int n, int choice)
{
	int next_choice = (choice + (n / choice)) / 2;

	if (next_choice >= choice)
	{
		return (choice);
	}
	else
	{
		return (sqrt_helper(n, next_choice));
	}
}
