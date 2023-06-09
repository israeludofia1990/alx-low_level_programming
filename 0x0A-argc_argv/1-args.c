#include <stdio.h>
/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
