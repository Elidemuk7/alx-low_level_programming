#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: input charscter
 * @s: strings
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
