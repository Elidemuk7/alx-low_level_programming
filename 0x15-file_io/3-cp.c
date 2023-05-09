#include "main.h"

char *create_buffer(char *f);
void close_file(int file_d);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @f: name of the file buffer is storing chars to
 * Return: returns pointer to the newly-allocated buffer
 */

char *create_buffer(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 *close_file - closes file
 *@file_d: the file descriptor
 */
void close_file(int file_d)
{
	int n;

	n = close(file_d);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file_d %d\n", file_d);
		exit(100);
	}
}

