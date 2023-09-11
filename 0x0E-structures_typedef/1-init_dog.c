#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to a struct dog to be initialized.
 * @name: Pointer to a string representing the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Description: This function initializes a struct dog with the provided name,
 * age, and owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
d->name = name;
d->age = age;
d->owner = owner;
}
