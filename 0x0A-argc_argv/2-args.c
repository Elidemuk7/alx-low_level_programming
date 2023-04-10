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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
