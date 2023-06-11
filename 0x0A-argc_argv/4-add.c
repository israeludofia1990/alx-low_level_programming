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
	char *tmp;
	int num;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	for (; i < argc; i++)
	{
		tmp = argv[i];
		num = atoi(tmp);
		if (num == 0 && tmp[0] != '\0')
		{
			printf("Error: \n");
			return (1);
		}
		else
		{
			add += num;
		}
	}
	printf("%d\n", add);
	return (0);
}
