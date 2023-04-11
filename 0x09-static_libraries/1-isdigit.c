#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: parameter to be checked
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
