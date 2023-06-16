#include "main.h"
#include <stdlib.h>
/*
 * string_nconcat - function de contatenantion
 * @s1: var1
 * @s2: var2
 * @n: int
 * Return: chaine de caractere
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int k = 0;
	unsigned int j;
	char *conca;

	while (s1[i] != '\0')
		i++;
	conca = malloc(sizeof(char) * (i + n + 1));
	if (conca == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		conca[k] = s1[j];
		k++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		conca[k] = s2[j];
		j++;
		k++;
	}
	conca[k + 1] = '\0';
	return (conca);
}
