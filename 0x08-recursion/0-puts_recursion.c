#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: input parameter
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x]);
		_puts_recursion(++s);
	}
}
