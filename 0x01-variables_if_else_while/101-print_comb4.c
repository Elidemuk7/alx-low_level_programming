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
	int z;

	for (x = 0 ; x < 8 ; x++)
	{
		for (y = 1 ; y < 9 ; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (y > x && z > y)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x + y + z < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
