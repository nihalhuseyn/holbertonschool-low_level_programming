#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Handles errors and exits the program.
 *
 * @code: Code to exit with.
 * @message: Error message to print out.
 * @filename: Name of the file associated with the error.
 * @fd: File descriptor associated with the error.
 */
void error_exit(int code, const char *message, const char *filename, int fd)
{
	if (fd == 99)
		dprintf(2, "%s %s\n", message, filename);
	else if (fd == 98)
		dprintf(2, "%s %s\n", message, filename);
	else if (fd == 988)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else if (fd == 97)
		dprintf(2, "%s", message);
	else
		dprintf(2, "%s %s %d\n", message, filename, fd);
	exit(code);
}

/**
 * main - Main function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Success.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1], 988);
	umask(0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2], 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to", argv[2], 99);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1], 98);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", argv[1], fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", argv[2], fd_to);

	return (0);
}
