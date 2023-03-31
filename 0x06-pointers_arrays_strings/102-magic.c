#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0.
 */

int main(void)
{
	int a[] = {1, 2, 98, 4};
	int *p = a;

	printf("a[2] = %d\n", *(p + 2));
	printf("p[2] = %d\n", p[2]);
	printf("*(a + 2) = %d\n", *(a + 2));
	return (0);
}

