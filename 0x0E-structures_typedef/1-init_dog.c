#include "dog.h"
#include <stdlib.h>
/*
 * init_dog - function that will initialise the dog
 * @d: var structur de donne
 * @name: var
 * @age: var
 * @owner: var
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
