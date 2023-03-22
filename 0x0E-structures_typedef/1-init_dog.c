#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: var pointer
 * @name: var char
 * @age: age var
 * @owner: var
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
