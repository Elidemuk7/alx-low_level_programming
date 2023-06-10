#include "main.h"

/**
 * *_memset - a function that fills the first n bytes
 * @n: bytes
 * @s: pointert to memory
 * @b: constant byte
 *
 * Return: always s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > r; r++)
		s[r] = b;
	return (s);
}

