#include "main.h"

/**
 * rev_string - print a string then reverse it
 * @s: string to be printed
 * Return: always 0
 */

void rev_string(char *s)
{
	long int i;
	int a;

	char revstr[9000];
	int length = 0;

	for (a = length - 1 ; a >= 0 ; a--)
	{
		revstr[length] = s[a];
		length++;
	}
	for (i = 0 ; i <= (int)(strlen(revstr)); i++)
	{
		s[i] = revstr[i];
	}
}
