#include "main.h"
/**
 * is_number - returns a prime number
 * @n: number
 * @i: number
 * Return: integer
 */
int is_number(int n, int i)
{

	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_number(n, i + 1));
}
/**
 * is_prime_number - returns a prime number
 * @n: number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (is_number(n, 2));
}
