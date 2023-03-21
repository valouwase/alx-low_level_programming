#include "dog.h"
/**
 * init_dog - function holding our struct
 * @d: an access to our struct
 * @name: char parameter.
 * @age: float parameter.
 * @owner: char parameter.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
