#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: Index of the value if found or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int low = 0, jump = sqrt(size);
	int i = 0;

	if (array == NULL || size <= 0)
		return (-1);
	for (; i < (int)size; i += jump)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
		low = i;
	}
	printf("Value found between indexes [%d] and [%d]\n", low, i);
	for (i = low; i < (int)size && i < low + jump; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
