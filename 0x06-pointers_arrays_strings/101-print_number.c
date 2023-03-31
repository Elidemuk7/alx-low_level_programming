#include "main.h"

/**
 * print_number - to print an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	int digit, num_chars = 0, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
		num_chars++;
	}
	if (num_chars == 0)
	{
		_putchar('0');
	}
}

