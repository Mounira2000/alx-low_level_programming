#include "main.h"

/*
 * args - function that print all the argument
 * @argc: var
 * @argv: var
 * Return: int
 */

int args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(*argv[i]);
	}

	return (0);
}
