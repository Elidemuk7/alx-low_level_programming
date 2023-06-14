#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that counts the number of ...
 * @s: string to evaluate
 *
 * Return: returns number of words
 */
int count_word(char *s)
{
	int flag, k, p;

	flag = 0;
	p = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			p++;
		}
	}

	return (p);
}
/**
 * **strtow - the function splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, len = 0, words, k = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (k)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - k;
				y++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
