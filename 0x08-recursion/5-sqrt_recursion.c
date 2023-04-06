#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: integer
 * @x: base
 * Return: square root of n\
 */
int _sqrt(int n, int x)
{
	int square = x * x;

	if (n < square)
		return (-1);
	else if (n == square)
		return (x);
	else
		return (_sqrt(n, x + 1));
}	
