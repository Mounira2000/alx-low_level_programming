#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code
 *@d: var
 * Return: Always 0.
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s \n", d->name);
		}
		else
		{
			printf("NULL\n");
		}

		if (d->age != 0)
		{
			printf("Age: %f \n", d->age);
		}
		else
		{
			printf("NULL\n");
		}

		if (d->owner == NULL)
		{
			printf("NULL\n");

		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

