#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: var
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}

	return (ptr);

}
