#include "main.h"

/**
 * print_rev - is a function that reverse a string
 * Return: nothing
 * @s: - variable
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (; *s++;)
	{
		count++;
	}
	for (i = count; i  >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
