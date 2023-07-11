#include "main.h"

/**
 * append_text_to_file - the function appends text at the...
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end...
 * Return: returns 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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
	file_f = open(filename, O_WRONLY | O_APPEND);
	w = write(file_f, text_content, length);
	if (file_f == -1 || w == -1)
		return (-1);
	close(file_f);
	return (1);
}
