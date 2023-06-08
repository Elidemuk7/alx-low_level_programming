#include "main.h"
#include <string.h>
/**
 * is_palindrome - that check for palindrome
 * @s: string
 * Return: 1 if string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	size_t len = strlen(s);

	if (len <= 0)
	{
		return (1);
	}
	else if (s[1] != s[len - 2])
	{
		return (0);
	}
	else if (s[0] == s[len])
	{
		return (is_palindrome(s));
	}
	return (1);
}
