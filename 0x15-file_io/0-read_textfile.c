#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- STDOUT to print text file.
 * @filename: text file being read
 * @letters: letters to be read
 * Return: w- number of bytes printed and read
 *        0 when filename is NULL or function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
