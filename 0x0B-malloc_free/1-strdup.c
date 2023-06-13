#include "main.h"
#include <stdlib.h>

/*
 * _strdup - function that create a new variable
 * @str: var
 * Return: retur a pointer
 */

char *_strdup(char *str)
{
	int i, j;
	int len = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len != 0)
	{	str2 = malloc(sizeof(char) * (len + 1));
		if (str2 == NULL)
			return (NULL);

		for (j = 0; str[j] != '\0'; j++)
		{
			str2[j] = str[j];
		}
		return (str2);
	}
	else
	{
		return (NULL);
	}
}
