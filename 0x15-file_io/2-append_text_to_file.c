#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: filename to append
 * @text_content: content to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (!fd)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len =  strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
