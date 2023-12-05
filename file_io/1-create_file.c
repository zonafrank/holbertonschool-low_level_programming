#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates or truncates a file and writes text content to it.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	write(fd, text_content, strlen(text_content));
	close(fd);

	return (1);
}
