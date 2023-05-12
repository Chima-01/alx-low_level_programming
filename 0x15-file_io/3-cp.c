#include "main.h"

/**
 * filecpy - This function copies the content of a file to another file.
 * @file_from: argument file to copy from
 * @file_to: argument file to copy file1 to
 * Return: 1 (success)
 */

int filecpy(const char *file_from, const char *file_to)
{
	int fd, fc;
	ssize_t r;
	char buffer[1024];

	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	r = read(fd, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fc = close(fd);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
		return (_filecpyto(buffer, file_to));
}

/**
 * _filecpyto - function to copy file
 * @fd: file descriptor
 * @buff: buffer
 * @file_cpy: file to copy content of buff to;
 * Return: 1 (success)
 */

int _filecpyto(char *buff, const char *file_cpy)
{
	int fd1, fc1;
	ssize_t w;

	fd1 = open(file_cpy, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_cpy);
		exit(99);
	}

	w = write(fd1, buff, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_cpy);
		exit(99);
	}
		fc1 = close(fd1);
		if (fc1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
			return (1);
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filecpy(av[1], av[2]);

	return (0);
}
