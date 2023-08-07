#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated str to write to the file.
 *
 * Return: return 1 on success, otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w_status, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		w_status = write(fd, text_content, len);
		if (w_status == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
