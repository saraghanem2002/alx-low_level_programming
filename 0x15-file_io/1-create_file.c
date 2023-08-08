#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file
 * @text_content: A pointer
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, z);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
