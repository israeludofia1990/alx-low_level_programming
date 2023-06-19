#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints members of struct dog
 *
 * @d: new dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
