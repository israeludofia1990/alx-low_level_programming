#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int add = 0;
	int i = 1;
	int j;
	char *tmp;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	for (; i < argc; i++)
	{
		tmp = argv[i];
		for (j = 0; tmp[j] != '\0'; j++)
		{
			if (tmp[j] < '0' || tmp[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(&tmp[j]);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
