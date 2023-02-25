#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign
 * @n: variable
 * Return: 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		if (n > 0)
		{
			printf("1");
			return (1);
		}
		else
		{
			printf("0");
			return (0);
		}
	}
}
