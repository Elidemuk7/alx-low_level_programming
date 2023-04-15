#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of aloocated space for ptr
 * @new_size: size of the new memory block
 * Return: pointer to the memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	s = malloc(new_size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(s, ptr, old_size);
	}
	else
	{
		memcpy(s, ptr, new_size);
	}
	free(ptr);
	return (s);
}
