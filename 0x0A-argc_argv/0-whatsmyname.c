#include "main.h"

/*
 * main - allow to tell the name od=f the function
 * @argc: var int
 * @argv: var tableau char
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		_putchar(*argv[0]);
		_putchar ('\n');
	}

	return (0);
}
