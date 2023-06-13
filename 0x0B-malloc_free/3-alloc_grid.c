#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocates space for matrix
 * @width: matrix column
 * @height: matrix row
 * Return: pointer to a pointer to an integer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ptr[j][k] = 0;
		}
	}
	return (ptr);
}
