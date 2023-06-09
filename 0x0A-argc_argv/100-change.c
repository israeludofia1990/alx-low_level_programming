#include <stdio.h>
#include <stdlib.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
/**
 * main - returns maximum coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int cents;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/** Calculate the number of quarters to give the customer */
	quarters = calculate_quarters(cents);
	cents = cents - quarters * 25;

	 /** Calculate the number of dimes to give the customer */
	dimes = calculate_dimes(cents);
	cents = cents - dimes * 10;

	/** Calculate the number of nickels to give the customer */
	nickels = calculate_nickels(cents);
	cents = cents - nickels * 5;

	/** Calculate the number of pennies to give the customer */
	pennies = calculate_pennies(cents);
	cents = cents - pennies * 1;

	coins += quarters + dimes + nickels + pennies;
	printf("%d\n", coins);

	return (0);
}
/**
 * calculate_quarters - calculates coins in quarters
 * @cents: user input
 * Return: interger
 */
int calculate_quarters(int cents)
{
	int count;

	for (count = 0; cents >= 25; count++)
	{
		cents = cents - 25;
	}
	return (count);
}
/**
 * calculate_dimes - calculates coins dimes
 * @cents: user input
 * Return: integer
 */
int calculate_dimes(int cents)
{
	int count;

	for (count = 0; cents >= 10; count++)
	{
		cents = cents - 10;
	}
	return (count);
}
/**
 * calculate_nickels - calculates coins dimes
 * @cents: user input
 * Return: integer
 */
int calculate_nickels(int cents)
{
	int count;

	for (count = 0; cents >= 5; count++)
	{
		cents = cents - 5;
	}
	return (count);
}
/**
 * calculate_pennies - calculates coins dimes
 * @cents: user input
 * Return: integer
 */
int calculate_pennies(int cents)
{
	int count;

	for (count = 0; cents >= 1; count++)
	{
		cents = cents - 1;
	}

	return (count);
}

