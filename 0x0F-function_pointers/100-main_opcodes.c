#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int i = 0;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	while (i < a)
	{
		if (i == a - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
		i++;
		printf("%02hhx ", c[i]);
	}
	return (0);
}
