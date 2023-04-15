#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array
 * @size: size of bytes
 * Return: a pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	memset(c, 0, nmemb * size);
	return (c);
}
