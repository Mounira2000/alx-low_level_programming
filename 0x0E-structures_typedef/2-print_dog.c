#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/*
 * print_dog-betty docis not working i don't know why
 * @d: var
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);

	}
}
