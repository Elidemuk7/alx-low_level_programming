#include "main.h"

/**
 * *_memcpy - function that copies bytes from memory
 * @n: number of bytes
 * @dest: destination
 * @src: source
 * Return: always dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
