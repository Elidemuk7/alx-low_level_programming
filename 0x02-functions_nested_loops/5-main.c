#include "main.h"

/**
 * print_sign - function to print the sign of a number
 *
 * @n: function parameter
 *
 * Return: 1 if the sign of a number is positive, 0 if it is 0 and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
