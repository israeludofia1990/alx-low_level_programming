#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees dog struct
 * @d: new dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
