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
void handle_error(int code, const char *message, const char *str_arg, int int_arg)
{
	if (str_arg)
		dprintf(STDERR_FILENO, message, str_arg);
	else if (int_arg)
		dprintf(STDERR_FILENO, message, int_arg);
	else
		dprintf(STDERR_FILENO, message);
	exit(code);
}

/**
 * open_file - Opens a file with specified flags and permissions, handling errors.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @perms: The permissions to set if the file is created.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int flags, mode_t perms)
{
	int fd = open(filename, flags, perms);
	if (fd == -1 && (flags & O_WRONLY))
		handle_error(99, "Error: Can't write to %s", filename, 0);
	else if (fd == -1 && (flags & O_RDONLY))
	{
		handle_error(98, "Error: Can't read from file %s", filename, 0);
	}
	return fd;
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
		handle_error(97, "Usage: cp file_from file_to\n", NULL, 0);

	fd_from = open_file(av[1], O_RDONLY, 0664);
	fd_to = open_file(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	while ((chars_read = read(fd_from, buffer, BUFFSIZE)) > 0)
	{
		chars_written = write(fd_to, buffer, chars_read);

		if (chars_written != chars_read)
		{
			close(fd_from);
			close(fd_to);
			handle_error(99, "Error: Can't write to %s", av[2], 0);
		}
	}

	if (chars_read == -1)
	{
		close(fd_from);
		close(fd_to);
		handle_error(98, "Error: Can't read from file %s", av[1], 0);
	}

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %d", NULL, fd_from);

	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %d", NULL, fd_to);

	return (0);
}
