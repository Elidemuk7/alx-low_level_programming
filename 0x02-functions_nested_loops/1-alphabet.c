#include "main.h"

/**
 * print_alphabet -  func that prints alphabet in lower case
 *
 * Return: always return
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar ('\n');
}
