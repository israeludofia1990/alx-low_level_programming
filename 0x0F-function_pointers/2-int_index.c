#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: integer array
 * @size: array size
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
