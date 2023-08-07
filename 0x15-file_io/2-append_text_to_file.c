#include "main.h"

/**
 * check_len - func that return the len of the str
 *
 * @str: string that will be check
 *
 * Return: return int len value of the str
*/
int check_len(char *str)
{
	int count = 0;

	if (!str)
		return (0);
	while (*str++)
		count++;
	return ((count));
}
/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file to create.
 * @text_content: NULL terminated str to write to the file.
 *
 * Return: return 1 on success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_status = 0, lenght = check_len(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (lenght)
		w_status = write(fd, text_content, lenght);
	close(fd);
	return (w_status == lenght ? 1 : -1);
}
