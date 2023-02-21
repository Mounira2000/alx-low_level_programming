#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>5)
	{
		printf("Last digit of %d is %d and is greater than 5 ")

	}
	else if(n<6)
	{
		printf("Last digit of")		
	}
	return (0);
}
Footer
