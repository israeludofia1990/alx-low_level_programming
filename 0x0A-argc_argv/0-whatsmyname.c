#include "main.h"
/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	for (; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
