#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX.
 * @filename: Ptr to the name of the file to read.
 * @letters: Num of letters to read and print.
 *
 * Return: return the actual number of letters or 0 on failure.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_value;
	char buffer[BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_value = read(fd, &buffer[0], letters);
	bytes_value = write(STDOUT_FILENO, &buffer[0], bytes_value);
	close(fd);
	return (bytes_value);
}
