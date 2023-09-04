#include "main.h"

/**
 * create_file - the function creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: returns 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_f, w, length;

	length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	file_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_f, text_content, length);
	if (file_f == -1 || w == -1)
		return (-1);

	close(file_f);
	return (1);
}
