#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j > 9)
		{
			j = (i + 2);
		}
		i++;
	}
	return (0);
}
