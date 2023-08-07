#include "main.h"

#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to %s\n"
#define ERROR_CLOSE "Error: Can't close fd %d\n"

/**
 * main - program that cp the content of a file to another file.
 *
 * @argc:  indicates how many arguments (arg count).
 * @argv: an arr of pointers to arrs of char objects.
 *
 * Return: return 1 if success or 0 on failure.
*/
int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0;
	char buffer[BUFFER_SIZE];
	ssize_t bytes;
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERROR_READ, file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, file_to), exit(99);
	while ((bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		if (write(fd_to, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, ERROR_WRITE, file_to), exit(99);
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (close(fd_from))
		dprintf(STDERR_FILENO, ERROR_CLOSE, fd_from), exit(100);
	if (close(fd_to))
		dprintf(STDERR_FILENO, ERROR_CLOSE, fd_to), exit(100);
	return (EXIT_SUCCESS);
}
