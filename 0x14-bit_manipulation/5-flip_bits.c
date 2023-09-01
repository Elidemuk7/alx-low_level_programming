#include "main.h"

/**
 * flip_bits - the function returns the number of bits
 * needed to flip to get from one number to another
 * @n: first number of bits
 * @m: second number of bits
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int v, num = 0;

	v = n ^ m;

	while (v > 0)
	{
		num += (v & 1);
		v >>= 1;
	}

	return (num);
}
