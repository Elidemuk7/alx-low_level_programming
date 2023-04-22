#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to a function
 * @...: variable of what is to be printed
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int x = 0;
	char *s;
	char *sep = "";

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", sep, s);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
