#include "main.h"

/**
 * create_file - This function creates a file.
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on (success), -1 on (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!fd)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
	len = strlen(text_content);
	i = write(fd, text_content, len);
	if (!i)
	{
		close(fd);
		return (-1);
	}
	}
	else
	{
		close(fd);
		return (1);
	}

	close(fd);
	return (1);
}
