#include <stdio.h>
/**
 * main - prints argc
 * @argc: count
 * @argv: unused
 * Return: integer
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
