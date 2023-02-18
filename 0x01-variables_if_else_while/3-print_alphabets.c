#include <stdio.h>
#include <stdio.h>
/**
 * main - prints the alphabets in lowercase, then in uppercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char low = 'a';
	char upper = 'A';

	while (low < 'z')
	{
		putchar(low);
		low++;
	}
	while (upper < 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
