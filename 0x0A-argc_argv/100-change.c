#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	cents = atoi(argv[1]);
	num_coins = 0;
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents -= 25;
		num_coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		num_coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		num_coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		num_coins++;
	}

	num_coins += cents;

	printf("%d\n", num_coins);
	return (0);
}

