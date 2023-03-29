#include "main.h"

/**
 * puts2 - print every other character
 * @str: string to be printed
 * Return: always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
