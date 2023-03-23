#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/*
 * print_name -  function that print
 *
 * @name: var
 * @f: var
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
