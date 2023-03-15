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
	unsigned int i;

	
	ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}		
	}

	return (ptr);

}
