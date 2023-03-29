#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: string
 * Return: always 0
 */

void puts_half(char *str)
{
	int i;
	int length;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (i = (length / 2) ; i < length ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (i = (length - 1) / 2 ; i < length ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
