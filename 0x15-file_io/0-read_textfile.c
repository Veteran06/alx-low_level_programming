#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer
 * @letters: letters to read
 * Return: 0 if filename is null and cant open,
 * returns the actual number of letters it could read and print
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t RD, WR;/* RD stands for read, WR stands for write */
	char *w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	w = malloc(sizeof(char) * (letters));
	if (w == NULL)
		return (0);

	RD = read(fd, w, letters);
	WR = write(STDOUT_FILENO, w, RD);

	close(fd);
	free(w);

	return (WR);
}
