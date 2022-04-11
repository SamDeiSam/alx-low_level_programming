#include "dog.h"

/**
 * init_dog -function initializes dog struct
 *
 * @d: input ponter
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
