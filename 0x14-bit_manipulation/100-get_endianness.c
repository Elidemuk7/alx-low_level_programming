#include "main.h"

/**
 * get_endianness - the function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int r;
	char *c = (char *) &r;

	r = 1;

	return (*c);
}
