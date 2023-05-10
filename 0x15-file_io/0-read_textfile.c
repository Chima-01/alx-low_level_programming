#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - This function cretes a file
 * @filename: file name
 * @letters: number of letter to read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t i, w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	i = read(fd, buffer, letters);

	if (i == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, i);

	if (w == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	return (i);
}
