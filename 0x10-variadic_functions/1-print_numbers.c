#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - is the function
 * @separator: var
 * @n: var
 * @...: var list
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int val;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		val = (va_arg(ap, int));
		printf("%d", val);


		if (separator == NULL && separator != 0)
			printf("%s ", separator);
	}

	printf("\n");

	va_end(ap);
}
