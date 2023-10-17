#include "main.h"

/**
 * _isupper - function to check for upper case
 * @c: parameter to be checked
 * Return: 0
 */

int _isupper(int c)
{
	int k;

	for (k = 'A' ; k <= 'Z' ; k++)
	{
		if (c == k)
			return (1);
	}
	return (0);
}
