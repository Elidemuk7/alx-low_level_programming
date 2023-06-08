#include "main.h"

/**
 * is_prime_number - check for prime numbers
 * @n: parameter integer
 * Return: 1 for prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (check_for_prime(n, 1));
}

/**
 * check_for_prime - to check for prime numbers
 * @n: parameter integer
 * @x: iterator
 * Return: 1 for prime number, otherwise 0.
 */
int check_for_prime(int n, int x)
{
	if (= 1)
	{
		return (0);
	}
	else if (n % x == 0 && x > 1)
	{
		return (0);
	}
	else if ((n / x) < x)
	{
		return (1);
	}
	else
		return (check_for_prime(n, x + 1));
}
