#include "main.h"
#include <stdlib.h>


/**
 *str_concat - concatenetes deux string
 *@s1: var
 *@s2: var
 *Return: char
 */

char *str_concat(char *s1, char *s2)

{
	int i, j, x, y;
	char *ptr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0';)
		i++;
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0';)
			j++;
	}

	ptr = (char *) malloc(sizeof(char) * (i + j + 2));

	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}

	for (y = 0; y < (j - 1); y++)
	{
		ptr[i + y] = s2[y];
	}


	return (ptr);
}
