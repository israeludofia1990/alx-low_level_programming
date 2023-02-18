#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int numb = '0';

	while (numb <= '9')
	{
		putchar(numb);
		numb++;
	}
	putchar('\n');
	return (0);
}
