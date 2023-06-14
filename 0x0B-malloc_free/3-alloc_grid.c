#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns to a 2 dimensional array of integers
 * @width: width
 * @height: height of the matrix
 * Return: pointer to the array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int p;
	int q;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		array[p] = (int *)malloc(sizeof(int) * width);
		if (array[p] == NULL)
		{
			free(array);
			for (q = 0; q <= p; q++)
			{
				free(array[q]);
			}
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
		{
			array[p][q] = 0;
		}
	}
	return (array);
}
