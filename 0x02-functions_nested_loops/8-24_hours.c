#include "main.h"
/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int hour = 0;
	int mins;

	while (hour < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			mins++;
			_putchar('\n');
		}
		hour++;
	}
}
