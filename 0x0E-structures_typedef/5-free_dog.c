#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - struct to be freed
 * @d: address of the struct
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
