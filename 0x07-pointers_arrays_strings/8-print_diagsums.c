#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
