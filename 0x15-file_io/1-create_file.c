#include "main.h"

/**
* create_file - creates a file.
* @filename: name of the file to create.
* @text_content: NULL terminated string to write to the file.
* Return: 1 on success and -1 if error.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t  bytes_written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
