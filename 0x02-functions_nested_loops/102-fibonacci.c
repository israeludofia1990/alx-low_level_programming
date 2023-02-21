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

	for (int i = 0; i < 50; i++)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
