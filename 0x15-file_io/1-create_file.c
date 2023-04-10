#include "main.h"

/**
 * create_file - function that creates a file.
 * @text_content: content written
 * @filename: file to create
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/* stands for file descriptor*/
	int w;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);/* 0600 is permission*/

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	if (text_content)

	{
	for (w = 0; text_content[w]; w++)
		wr = write(fd, text_content, w);

	if (wr == -1)
		return (-1);
	}

	close(fd);

	return (1);
}

