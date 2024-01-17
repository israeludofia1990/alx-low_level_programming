#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index if found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (size - 1);
	size_t pos;
	double factor;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (-1);
			return (-1);
		}
		factor = ((double)(high - low) / (array[high] - array[low]));
		pos = low + (factor * (value - array[low]));
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
