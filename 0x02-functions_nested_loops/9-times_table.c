#include <stdio.h>

/**
 * times_table - write the mutiplication table
 * return: nothing
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d,", i * j);
		}
		printf("\n");

	}
}
