#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	char low = 'z';

	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
