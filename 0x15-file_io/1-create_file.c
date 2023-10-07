#include "main.h"

/**
 * create_file - Gather a file.
 * @filename: A pointer to the name of the file to gather.
 * @text_content: A pointer to a string to write to the files.
 *
 * Return: On success, 1.
 *         On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
