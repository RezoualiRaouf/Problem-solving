#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frres dogs.
 *@d:Pointes to astruct dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
