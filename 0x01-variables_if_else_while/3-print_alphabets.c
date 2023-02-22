#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i = 0;
	int j = 0;

	for (i = 0; i <= 26; i++)
	{
		putchar(a[i]);
	}

	for (j = 0; j <= 27; j++)
	{
		putchar(a[j]);
	}

	putchar('\n');

	return (0);
}
