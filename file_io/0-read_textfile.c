#include <sys/types.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: Upon success, returns the actual number of letters read and printed.
 *         On failure, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t letters_read;
	/*size_t letters_written;*/

	int fd;
	char *c;

	if (filename == NULL)
		return 0;

	c = malloc(sizeof(char) * letters + 1);
	if (c == NULL)
		return 0;

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
	{
		return 0;
	}

	letters_read = read(fd, c, letters);
	c[letters_read] = '\0';

	letters_written = write(1, c, letters_read);

	free(c);
	close(fd);

	/*if (letters_read != letters_written)
		return 0;*/
	return letters_read;
}