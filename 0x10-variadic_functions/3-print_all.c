#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - function that print all
 * @format: var
 * ...: var
 */


void print_all(const char * const format, ...)
{
	va_list valist;

	char c, *s;
	int i, j = 0;
	float f;


	va_start(valist, format);

	while (format[j])
	{
		switch (format[j])
		{
			case 's':
				s = va_arg(valist, char *);
				if (!s)
					printf("nil");
				printf("%s, ", s);
				break;
			case 'i':
				i = va_arg(valist, int);
				printf("%d, ", i);
				break;
			case 'c':
				c = (char) va_arg(valist, int);
				printf("%c, ", c);
				break;

			case 'f':
				f = va_arg(valist, double);
				printf("%f, ", f);
				break;

		}

		j++;
	}
	printf("\n");
	va_end(valist);
}
