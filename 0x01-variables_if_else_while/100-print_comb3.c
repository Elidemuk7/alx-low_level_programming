#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0 ; x < 9 ; x++)
	{
		for (y = 1 ; y < 10 ; y++)
		{
			if (y > x && y != x)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x + y < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
