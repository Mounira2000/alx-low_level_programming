
#include "main.h"

/**
 * _strchr - func
 * @s: - pointrt
 * @c: - char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] == c)
			return (&s[i]);
		else
			i++;
	}
	return (0);
}

