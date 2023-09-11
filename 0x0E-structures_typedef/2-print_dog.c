#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints information about a dog.
 * @d: A pointer to a struct dog.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
{
	free(d->name);
	printf("Name: (nil)\n");
}
else
	printf("Name: %s\n", d->name);
if (d->age == 0)
	printf("Age: (nil)\n");
else
	printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
{
	free(d->owner);
	printf("Owner: (nil)\n");
}
else
	printf("Owner: %s\n", d->owner);
}
