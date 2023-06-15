#include "main.h"
#include <stdlib.h>

/*
 * malloc_checked - function
 * @b: variable
 */

void *malloc_checked(unsigned int b)
{
	void *var;


	var = malloc(b);
	if (var == NULL)
	{
		exit(98);
	}

	return (var);
}
