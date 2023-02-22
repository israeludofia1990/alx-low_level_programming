#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 0;
	unsigned long sum_even;
	int numb = 0;

	while (numb < 10)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c < 4000000)
		{
			sum_even += c;
		}
		numb++;
	}
	printf("%lu\n", sum_even);
	return (0);
}
