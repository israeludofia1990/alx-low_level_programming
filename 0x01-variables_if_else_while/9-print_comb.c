#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int numb = '0';

	while (numb <= '9')
	{
		putchar(numb);
		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}
	putchar('\n');
	return (0);
}
