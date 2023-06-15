#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array
 * @min: min
 * @max: max
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, pos;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	pos = 0;
	while (size > 0)
	{
		arr[pos] = min + pos;
		pos++;
		size--;
	}
	return (arr);
}
