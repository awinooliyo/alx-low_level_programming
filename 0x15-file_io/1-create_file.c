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
	int number_of_letters = 0;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[number_of_letters])
		number_of_letters++;

	rwr = write(fd, text_content, number_of_letters);

	if (rwr == -1)
		return (-1);

	close(fd);
	return (1);
}
