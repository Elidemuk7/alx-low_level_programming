#include "main.h"

/**
 * flip_bits - the function returns the number of bits needed to flip to get from one number to another
 * @n: first number of bits
 * @m: second number of bits
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r = 63;
	int num = 0;
	unsigned long int cu;
	unsigned long int v;

	v = n ^ m;

	while (r >= 0)
	{
		cu = v >> r;
		if (cu & 1)
			num++;
	}
	r--;
	return (num);
}
