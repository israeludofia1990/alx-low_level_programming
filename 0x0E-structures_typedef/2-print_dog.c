#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints dog details
 * @d: the dog in question
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("float: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
	else
		return;
}
