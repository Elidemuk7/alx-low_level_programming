#include "main.h"

/**
 * *_strpbrk  - function searches a string for any of a set of bytes
 * @s: string
 * @accept: another string
 * Return: 0
 */


char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (0);
}

