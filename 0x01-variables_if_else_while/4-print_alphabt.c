#include <stdio.h>
/**
 * main: print all lowercase alphabets except e and q
 *
 * return: 0 on success
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
	 	{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
