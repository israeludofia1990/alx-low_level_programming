#include "main.h"
/**
 * _islower -  checks for lowercase character.
 *
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 * @c: character to test
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
