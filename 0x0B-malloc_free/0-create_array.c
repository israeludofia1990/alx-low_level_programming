#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: stores character
 * Return: pointer to a char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
