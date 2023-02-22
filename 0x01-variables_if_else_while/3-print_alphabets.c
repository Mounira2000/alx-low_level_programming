#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$";

	int i = 0;

	for (i = 0; i <= 52; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');

	return (0);
}
