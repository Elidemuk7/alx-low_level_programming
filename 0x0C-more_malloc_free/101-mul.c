#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned long long int multiply(unsigned long long int num1, unsigned long long int num2)
{
	return num1 * num2;
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 98;
			}
		}
	}
	unsigned long long int num1 = strtoull(argv[1], NULL, 10);
	unsigned long long int num2 = strtoull(argv[2], NULL, 10);
	unsigned long long int result = multiply(num1, num2);
	
	printf("%llu\n", result);
	return 0;
}
