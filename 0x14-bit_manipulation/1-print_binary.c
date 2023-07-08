#include "main.h"

/**
 * print_binary - convert decimal number to binary number
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int i;
	int x;
	unsigned long int cu;

	i = 63, x = 0;

	while (i >= 0)
	{
		cu = n >> i;
		if (cu & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	i--;
	if (!x)
		_putchar('0');
}
