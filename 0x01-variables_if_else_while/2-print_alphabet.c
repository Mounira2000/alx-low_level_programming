#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0 (success)
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
