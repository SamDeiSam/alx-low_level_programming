#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct
 * @d: pointer to free
 *
 * Return: 0
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
