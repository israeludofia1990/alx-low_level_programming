#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int n = 0;

	while (n < 9)
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
