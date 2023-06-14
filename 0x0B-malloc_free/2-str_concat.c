#include "main.h"
#include <stdlib.h>

/*
 * str_concat - function de concatenation
 * @s1: char
 * @s2: char
 * Return: pointer sur caractere ou encore chaine de caractere
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *conca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[j] != '\0')
		j++;
	while (s1[i] != '\0')
		i++;
	conca = malloc(sizeof(char) * (i + j + 1));
	if (conca == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		conca[k] = s1[i];
		k++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		conca[k] = s2[j];
		k++;
	}
	conca[k] = '\0';
	return (conca);
}
