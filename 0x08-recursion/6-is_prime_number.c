#include "main.h"

int actual(int x, int y);
/*
 * is_prime_number - says if an integer is a prime number or not
 * @n: var
 * Return: int
 */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual(n, n - 1));
	}
}

/*
 * actual -  calculates if a number is prime recursively
 * @x: variable permettant de
 * @y: variable permettant de
 * Return: 1 ou 0
 */


int actual(int x, int y)
{
	if (y == 1)
		return (0);
	if (x % y == 0 && i > 0)
	{
		return (0);
	}
	return (actual(x, y - 1));
}



