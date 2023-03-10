#include "main.h"

/**
 * factorial - factoriel
 * @n: var
 * Return: int
 */

int factorial(int n)
{

	if (n == 0 || n < 0)
	{
		if (n == 0)
			return (1);
		else
			return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
