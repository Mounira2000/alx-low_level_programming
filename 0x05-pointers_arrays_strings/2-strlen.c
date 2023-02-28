#include "main.h"

/**
 *_strlen - longueur calcul
 * Return: longuer
 * @s: - caratere
 *
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
	{
		count++;
	}

	return (count);
}
