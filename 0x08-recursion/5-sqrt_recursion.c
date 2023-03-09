#include "main.h"

int helper_sqrt(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n : number to calculate
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if ((n <= 0) || (n == 1))
		return (n);
	else
		return (helper_sqrt(n, 1));
}
/**
 * helper_sqrt - checks numbers to get squar root
 *
 * @n: number to calculate
 *
 * @a: number to check
 * Return: integer
 */
int helper_sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (helper_sqrt(n, a + 1));
}
