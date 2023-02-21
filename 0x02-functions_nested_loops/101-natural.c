#include <stdio.h>
/**
 * main - rints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int sum_multiple;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum_multiple += n;
		}
	}
	printf("%d\n", sum_multiple);

	return (0);
}
