#include "holberton.h"

/**
 * append_text_to_file - appendeds text to the end of the file
 * @filename: it's the name of the file
 * @text_content: the text to add in the file created
 *
 * Return: 1 or -1 in case of fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, lwr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		{}
	}

	lwr = write(fd, text_content, len);
	if (lwr < 0)
		return (-1);

	close(fd);

	return (1);
}
