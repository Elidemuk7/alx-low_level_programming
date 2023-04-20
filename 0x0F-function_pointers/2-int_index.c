#include "function_pointers.h"

/**
 * int_index - a function thst searches for an integer
 * @array: array
 * @size: size of elements in an array
 * @cmp: pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}
