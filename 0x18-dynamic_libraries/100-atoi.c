#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1l num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (*s == '+')
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
