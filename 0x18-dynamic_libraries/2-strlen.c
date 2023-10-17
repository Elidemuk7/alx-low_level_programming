#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string number
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	return (length);
}
