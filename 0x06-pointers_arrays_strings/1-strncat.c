#include "main.h"

/**
 * *_strncat - function that
 * @dest: - variable
 * @src: - variable
 * @n: - varia
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0';)
		len++;

	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[len + i] = src[i];

	dest[len + i] = '\0';
	return (dest);
}
