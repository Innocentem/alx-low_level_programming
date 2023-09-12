#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees malloc  for a struct dog
 * @d: to be freed
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
