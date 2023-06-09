#include <stdio.h>
/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
