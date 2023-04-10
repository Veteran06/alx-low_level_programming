#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor*/
	int w;
	int wr;

	if
