#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - returns dynamically allocated space
 * @b: number to make space for
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
