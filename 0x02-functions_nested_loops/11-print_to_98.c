#include <stdio.h>

/**
 * print_to_98 - function that print number to 98
 * @n: - variable
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98 ");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98 ");
	}
}
