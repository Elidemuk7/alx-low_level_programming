#include "main.h"

/**
 * _abs - function to print absolute value of an integer
 *
 * @x: parameter to be checked
 *
 * Return: always x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
