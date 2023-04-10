#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int p, q, r;

	if (argv == NULL)
	{
		printf("0\n");
	}
	for (p = 1; p < argc; p++)
	{
		for (q = 0; q < (int) strlen(argv[p]); q++)
		{
			if (argv[p][q] >= 'a' && argv[p][q] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (r = 1; r < argc; r++)
	{
		sum = sum + atoi(argv[r]);
	}
	printf("%d\n", sum);
	return (0);
}
