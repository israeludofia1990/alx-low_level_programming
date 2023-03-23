#include "function_pointers.h"
/**
 * array_iterator - performs operation on array
 * @array: array to work with
 * @size: array size
 * @action: function pointer
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
