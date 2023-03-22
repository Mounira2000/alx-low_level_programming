#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - function
 * @name: var
 * @age: var
 * @owner: var
 * Retur dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->name = name;
		new->age = age;
		new->owner = owner;

		return (new);
	}
}

