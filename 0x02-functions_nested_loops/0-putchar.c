#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";

	for (int i = 0; i <= 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
