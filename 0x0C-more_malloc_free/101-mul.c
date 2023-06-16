#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _isdigit - checks for a digit
 *
 * @c: Number to check
 *
 * Return: true on success false otherwise
 */
bool _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}
/**
 * mul - multiplies to numbers
 * @a: number to test
 * @b: number to test
 * Return: mul
 */
int mul(unsigned int a, unsigned  int b)
{
	unsigned product = a * b;

	return (product);
}
/**
 * isnumber - checks if a string contains number
 * @str: input string
 * Return: bool
 */
bool isnumber(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!_isdigit(str[i]))
		{
			return (false);
		}
	}
	return (true);
}
/**
 * main - multiplies two numbers
 * @ac: argument count
 * @av: argument vector
 * Return: int
 */
int main(int ac, char *av[])
{
	int num1, num2;
	char command[100];

/** av must be 3 */
	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
/** ensure av[1] and av[2] contains number only */
	if (!isnumber(av[1]) || !isnumber(av[2]))
	{
		printf("Error\n");
		exit(98);
	}
/** use atoi() to convert av[1] and av[]2 */
	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
/**	product = mul(num1, num2);*/
/** use bc to check resul */
	sprintf(command, "echo \"%d * %d\" | bc", num1, num2);
	system(command);
	return (0);
}
