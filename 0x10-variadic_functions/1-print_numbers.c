#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints number
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;

	va_start(l, n);

	while (i < n)
	{
		printf("%d", va_arg(l, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(l);
}
