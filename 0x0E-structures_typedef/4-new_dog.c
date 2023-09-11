#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t struct, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pd = malloc(sizeof(dog_t));
if (pd == NULL)
	return (NULL);
pd->name = malloc(sizeof(name) + 1);
if (pd->name == NULL)
	return (NULL);
pd->name = name;
pd->owner = malloc(sizeof(pd->owner) + 1);
if (pd->owner == NULL)
	return (NULL);
pd->owner = owner;
pd->age = age;

return (pd);
}
