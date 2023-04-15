#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer pointing to a newly allocated space or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s3;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}

	if (j > n)
		j = n;

	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		s3[k + i] = s2[k];
	}
	s3[i + j] = '\0';
	return (s3);
}
