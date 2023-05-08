#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file name.
* @text_content: added content.
* Return: 1 if the file exists, -1 if error or
* if the file does not exist.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letterCount;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letterCount = 0; text_content[letterCount]; letterCount++)
			;
		rwr = write(fd, text_content, letterCount);

		if (rwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
