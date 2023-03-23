#include "main.h"

/**
 * print_last_digit - function to print last digit
 *
 * @m: parametr to be printed
 *
 * Return: always n
 */

int print_last_digit(int m)
{
	int n;

	n = m % 10;
	if (m < 0)
		n = -(n);
	_putchar (n + '0');
	return (n);
}
