#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the newly created dog_t struct, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len = 0, owner_len = 0;
dog_t *pd = malloc(sizeof(dog_t));
if (pd == NULL)
	return (NULL);
while (name[name_len] != '\0')
	name_len++;
while (owner[owner_len] != '\0')
	owner_len++;
pd->name = malloc(sizeof(name) + 1);
pd->owner = malloc(sizeof(pd->owner) + 1);
if (pd->owner == NULL || pd->name == NULL)
{
	free(pd->owner);
	free(pd->name);
	free(pd);
	return (NULL);
}
for (i = 0 ; i <= name_len ; i++)
	pd->name[i] = name[i];
for (i = 0 ; i <= owner_len ; i++)
	pd->owner[i] = owner[i];
pd->age = age;
return (pd);
}
