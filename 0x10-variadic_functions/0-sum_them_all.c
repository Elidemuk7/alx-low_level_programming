#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 * @...: variable number
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(l, n);

	while (i < n)
	{
		sum = sum + va_arg(l, int);
		i++;
	}
	va_end(l);
	return (sum);
}
