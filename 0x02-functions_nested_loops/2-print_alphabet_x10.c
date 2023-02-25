#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10 this function will write 10times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int j;



	for (j = 0; j < 10; j++)
	{
		for (i = 1; i <= 26; i++)
		{
			_putchar (letters[i]);
		}
		_putchar ('\n');
	}
}
