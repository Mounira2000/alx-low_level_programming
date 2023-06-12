#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}


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
