#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints argc
 * @argc: count
 * @argv: unused
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[argc - 1]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	return (0);
}
