#include "main.h"


/**
 * swap_int - echange plavce to two integer
 * Return: - nothing
 * @a: - variable
 * @b: - variable
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	/*int q = *b;*/
	*a = *b;
	*b = p;

}
