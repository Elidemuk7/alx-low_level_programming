#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: a
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len_recursion(s + 1));
}
