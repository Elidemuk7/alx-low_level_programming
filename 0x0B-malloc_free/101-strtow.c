#include "main.h"
#include <stdlib.h>

/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **matrix;
	char *tmp;
	int i, j, len, words, x, start, end;

	j = 0;
	len = 0;
	x = 0;

	while (*(str + len))
	{
		len++;
	}
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == "" || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (x + 1);
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
		{
			start = i;
		}
	}
	matrix[j] = NULL;

	return (matrix);
}
