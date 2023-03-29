#include "main.h"

/**
 * swap_int - to swap two integers
 * @a: integer 1
 * @b: integer 2
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
