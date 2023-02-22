#include "main.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{
	int alpha;
	int numb = 0;
	
	while (numb < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		numb++;
		_putchar('\n');
	}
}
