#include "main.h"

/**
 * times_table - function to print 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int x;
	int y;
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;
			if (z < 81)
			{
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(z + '0');
		}
	}
	_putchar('\n');
	return (0);
}
