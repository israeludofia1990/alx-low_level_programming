#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - main program
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char **argv)
{
	int (*ptr)(int, int) = get_op_func(argv[2]);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", ptr(num1, num2));
	return (0);
}
