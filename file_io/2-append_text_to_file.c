#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int num_written, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	num_written = write(fd, text_content, strlen(text_content));
	close(fd);

	if (num_written == -1)
		return (-1);

	return (1);
}
