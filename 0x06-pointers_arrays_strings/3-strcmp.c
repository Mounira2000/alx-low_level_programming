#include "main.h"

/**
 * _strcmp - function copy
 * @s1: - variabla
 * @s2:- variable
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0';)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] != s2[i]);
		}
	}
	return (0);
}
