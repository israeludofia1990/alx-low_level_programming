#include <stdio.h>
/**
 * main - prints the name of this programe
 * @argc: stores number of items typed in
 * @argv: strings typed by user
 *
 * Return: integer
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
