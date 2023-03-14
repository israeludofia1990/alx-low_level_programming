#include <stdio.h>
/**
 * main - prints all argv[]
 * @argc: count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
