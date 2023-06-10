#include "main.h"

/**
 * *_strstr -  a function that locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_length = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_length) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
