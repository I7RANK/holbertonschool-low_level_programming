#include "holberton.h"

/**
 * read_textfile - reads and writes a file
 * @filename: it's the name of the file
 * @letters: is the number of letters it should read and print
 *
 * Return: the number of letters reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, cant_rd = 0, cant_wr = 0;
	char *fd_read = NULL;

	if (filename == NULL)
		return (0);

	fd_read = malloc(sizeof(char) * letters);
	if (fd_read == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	cant_rd = read(fd, fd_read, letters);
	if (cant_rd < 0)
		return (0);

	cant_wr = write(STDOUT_FILENO, fd_read, cant_rd);
	if (cant_wr < 0)
		return (0);

	close(fd);
	free(fd_read);

	return (cant_wr);
}
