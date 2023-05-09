#include "main.h"

/**
 * create_file - This function creates a file.
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1 on (success), -1 on (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (!fd)
	{
		close(fd);
		return (-1);
	}
	len = strlen(text_content);
	if (text_content != NULL)
	{
	i = write(fd, text_content, len);
	if (!i)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
