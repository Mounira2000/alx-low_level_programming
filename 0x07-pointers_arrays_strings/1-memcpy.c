 #include "main.h"

/**
 * _strchr - func
 * @dest: : - pointrt
 * @src: - char
 * @n: interger
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int q = n;

	for (i = 0; i < q; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
