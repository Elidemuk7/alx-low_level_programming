#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function returns a pointer to a new ...
 * @str: character
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *k;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	k = malloc(sizeof(char) * (i + 1));
	{
		if (k == NULL)
			return (NULL);
	}
	for (len = 0; str[len]; len++)
		k[len] = str[len];
	return (k);
}
