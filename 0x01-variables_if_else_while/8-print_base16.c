#include <stdio.h>
/**
 * main - prints all hecademal numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int hex_0 = '0';

	while (hex_0 <= '9')
	{
		putchar(hex_0);
		hex_0++;
	}
	hex_0 = 'a';
	while (hex_0 <= 'f')
	{
		putchar(hex_0);
		hex_0++;
	}
	putchar('\n');
	return (0);
}
