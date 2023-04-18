#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The struct dog variable
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner:owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
