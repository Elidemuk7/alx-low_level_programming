#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int x, y, z, len, u, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	u = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && u == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			u = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			u = 0;
		}
		x++;
	}

	if (u == 0)
		return (0);

	return (z);
}
