#include "main.h"
#include <stdlib.h>


/**
 * create_array - create an array of char
 *
 * @size: - var
 *
 * @c: - var
 *
 * Return: addr de variable de type char
 */

char *create_array(unsigned int size, char c)
{

	char *ptr;

	if (size == 0)
		return (0);

	ptr = (char *) malloc(size);

	*ptr = c;

	return (ptr);

}
