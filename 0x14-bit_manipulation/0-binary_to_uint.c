#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing a string of binary numbers
 * Return: returns converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int r, j;
	unsigned int dec_num;

	dec_num = 0;
	r = 0;

	if (b == NULL)
		return (0);

	while (b[r] != '\0')
		r++;
	r -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);

		if (b[j] == '1')
			dec_num += (1 * (1 << r));
		j++;

		r--;
	}
	return (dec_num);
}
