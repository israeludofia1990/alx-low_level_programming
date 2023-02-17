#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: this is the beginning of the program
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	/* your code goes there */
        if (L > 5)
		printf("%s %d is %d and is greater than 5\n ",str, n, l);
	else if (L == 0)
		printf("%s %d is %d and is 0\n ",str, n, l);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n ",str, n, l);

	return (0);
}
