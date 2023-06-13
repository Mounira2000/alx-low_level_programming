#include "main.h"
#include <stdlib.h>
/*
 * create_array - function that crate an array
 * @size: var
 * @c: var char
 * Description: create an array of size size and assign char c
 * Return: char
 */


char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (ar)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}

		return (ar);
	}
	else
		return (NULL);
}
