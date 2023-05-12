#include "main.h"

/**
 * _error - This function displays an error message
 * an exit with a code
 * @exit_code: exit code
 * @filename: file having error
 * @fd: file-descriptor error output
 */

void _error(int exit_code, const char *filename, int fd)
{
	switch (exit_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		break;
	default:
		break;
	}
		exit(exit_code);
}

/**
 * filecpy - This function copies the content of a file to another file.
 * @file_from: argument file to copy from
 * @file_to: argument file to copy file1 to
 * Return: 1 (success)
 */

void filecpy(const char *file_from, const char *file_to)
{
	int fd, fd1;
	ssize_t r, w;
	char buffer[1024];

	if (!file_from)
		_error(98, file_from, -1);

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		_error(98, file_from, -1);
	}

	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd1 == -1)
		_error(99, file_to, -1);

	while ((r = read(fd, buffer, 1024)) > 0)
	{
		w = write(fd1, buffer, r);
		if (w == -1 || r != w)
		{
			close(fd), close(fd1);
			_error(99, file_to, -1);
		}
	}

	if (r == -1)
		_error(98, file_from, -1);

	if (close(fd) == -1)
	{
		_error(100, NULL, fd);
	}

	if (close(fd1) == -1)
	{
		_error(100, NULL, fd1);
	}
}

/**
 * main - check file copy
 * @ac: arg count
 * @av: arg vector
 * Return: 0 (succes)
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		_error(97, NULL, -1);
	}

	filecpy(av[1], av[2]);

	return (0);
}
