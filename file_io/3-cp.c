#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFFSIZE 1024

/**
 * handle_error - Handles errors by printing an error message to standard error
 *                and exiting with a specified error code.
 * @code: The error code to exit with.
 * @message: The error message format string.
 * @arg: The argument to be included in the error message.
 *
 * Return: This function does not return, as it exits the program.
 */
void handle_error(int code, const char *message, char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - Entry point for the cp program.
 * @ac: The number of command-line arguments (including program name).
 * @av: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int ac, char **av)
{
	int fd_to, fd_from;
	ssize_t chars_read, chars_written;
	char buffer[BUFFSIZE];

	if (ac < 3)
		handle_error(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		handle_error(98, "Error: Can't read from file %s", av[1]);

	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to < 0)
		handle_error(99, "Error: Can't write to %s", av[2]);

	while ((chars_read = read(fd_from, buffer, BUFFSIZE)) > 0)
	{
		chars_written = write(fd_to, buffer, chars_read);

		if (chars_written != chars_read)
			handle_error(99, "Error: Can't write to %s", av[2]);
	}

	if (chars_read == -1)
		handle_error(98, "Error: Can't read from file %s", av[1]);

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %d", fd_from);

	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %d", fd_to);

	return (0);
}
