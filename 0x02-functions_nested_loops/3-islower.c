#include "main.h"
/**
 * _islower - is the function lowercharacter
 * @c: - is a variable
 *
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}