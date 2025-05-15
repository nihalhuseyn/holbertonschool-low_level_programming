#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

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
    exit(code); // Exit with the provided code
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    // Check argument count
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    // Open source file
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Error: Can't read from file", argv[1], 98);
    }

    // Open/create destination file
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        close(fd_from);
        error_exit(98, "Error: Can't write to", argv[2], 99); // Use 98 for write failure
    }

    // Copy file contents
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            close(fd_from);
            close(fd_to);
            error_exit(98, "Error: Can't write to", argv[2], 99); // Use 98 for write failure
        }
    }

    // Check for read error
    if (bytes_read == -1) {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file", argv[1], 98);
    }

    // Close
