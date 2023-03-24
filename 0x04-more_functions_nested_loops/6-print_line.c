#include "main.h"

/**
 * print_line - function to print line
 * @n: number of times the charecter _ should be printed
 */

void print_line(int n)
{
	int x;

	for (x = 1 ; x <= n ; x++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
