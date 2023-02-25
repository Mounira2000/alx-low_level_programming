#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that will print the hours
 * Return: 0
 */
void jack_bauer(void)
{

	int heures;
	int minutes;

	for (heures = 0; heures <= 23; heures++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (minutes < 10 && heures < 10)
			{
				printf("0%d:0%d\n", heures, minutes);
			}
			else if (minutes < 10 && heures >= 10)
			{
				printf("%d:0%d\n", heures, minutes);
			}
			else if (heures < 10  && minutes >= 10)
			{
				printf("0%d:%d\n", heures, minutes);
			}
			else
			{
				printf("%d:%d\n", heures, minutes);
			}
		}
	}
}
