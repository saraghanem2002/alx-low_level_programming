#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX standard output.
 * @filename: text file name.
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 *        or if filename is NULL return 0
 *        or if write fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t x;
	ssize_t y;
	char *s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0)
			;
	s = malloc(sizeof(char) * letters);
	y = read(fd, s, letters);
	x = write(STDOUT_FILENO, s, y);

	free(s);
	close(fd);
	return (x);
}
