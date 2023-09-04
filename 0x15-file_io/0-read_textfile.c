#include "main.h"

/**
 * read_textfile - the function reads a text file and prints...
 * @filename: the text file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_f, w, r;
	char *buff;

	file_f = open(filename, O_RDONLY);
	if (file_f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(file_f, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(file_f);
	return (w);
}
