#include "holberton.h"

void _close(int fd);

/**
 * main - copies a file
 * @ac: is the number of arguments that pass
 * @av: are the arguments that pass
 *
 * Return: 0 if all is ok
 */
int main(int ac, char **av)
{
	int f1 = 0, f2 = 0, len1 = 1, lwr = 0;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f1 = open(av[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	f2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (f2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	while (len1)
	{
		len1 = read(f1, buff, 1024);
		if (len1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
			exit(98);
		}

		if (len1 > 0)
		{
			lwr = write(f2, buff, len1);
			if (lwr < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
				exit(99);
			}
		}
	}

	_close(f1);
	_close(f2);

	return (1);
}

/**
 * _close - closes a file descriptor
 * @fd: it's the number of the file descriptor
 *
 * Return: na
 */
void _close(int fd)
{
	int lclos = close(fd);

	if (lclos < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
