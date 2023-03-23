#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: number to add
 * @b: number to add
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: number to subtract
 * @b: number to subtract
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return two numbers
 * @a: number to multiply
 * @b: number to mulyiply
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return two numbers
 * @a: number for operation
 * @b: numberfor operation
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);

}
/**
 * op_div - return two numbers
 * @a: number for operation
 * @b: numberfor operation
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error");
	exit(100);
}
