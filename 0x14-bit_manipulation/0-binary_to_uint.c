#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing a string of binary numbers
 * Return: returns converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int dec_num;

	dec_num = 0;
	r = 0;

	if (!b)
		return (0);
	while (b[r])
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[r] - '0');
	}
	r++;
	return (dec_num);
}
