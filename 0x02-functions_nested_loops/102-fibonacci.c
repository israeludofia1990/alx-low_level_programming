#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int n = 0;

	while (n < 50)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (n == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		n++;
	}
	return (0);
}
