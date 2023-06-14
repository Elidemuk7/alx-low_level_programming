#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints array of command line
 * @argc: length of array string
 * @argv: string of command line
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
