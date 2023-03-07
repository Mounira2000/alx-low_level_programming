#include "main.h"

/**
 * _memset - function that return the addresse of vsriable de type char
 * @s: var cha
 * @b: var char
 * @n: int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
