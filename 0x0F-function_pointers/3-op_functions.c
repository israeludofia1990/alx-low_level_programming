#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: number
 * @b: number
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: number
 * @b: number
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number
 * @b: number
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides number
 * @a: number
 * @b: number
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo of number
 * @a: number
 * @b: number
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
