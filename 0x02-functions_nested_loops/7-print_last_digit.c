#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: - number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	if(n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
