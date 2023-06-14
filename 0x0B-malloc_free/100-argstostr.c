#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of my program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int p;
	int q;
	int r;
	int len;
	char *str;

	r = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len));
	if (str == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			str[r] = av[p][q];
			r++;
		}
		str[r] = '\n';
		r++;
	}
	return (str);
}
