#include "main.h"

/**
 * puts_half - print the second half of a function
 * @str: - variable
 * Return: - numbers
 */

void puts_half(char *str)
{
	int count = 0;
	int n;
	int i;

	for (; *str++;)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		n = count / 2;
	}
	else
	{
		n = (count - 1) / 2;
	}

	for (i = n; i <= count; i++)
	{
		_putchar(str[i]);
	}
}
