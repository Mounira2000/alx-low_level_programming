#include <main.h>

/**
 * print_alphabet - alphabet is print followed by a new line
 *
 *
 * Return: 0
 */

void print_alphabet(void)
{
	letter[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar(letter[i]);
	}
}
