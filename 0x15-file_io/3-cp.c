#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * fail_file  - if files has error
 * @file_from: source
 * @file_to: destination
 * @argv: arguments vector
 */
void fail_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				 argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument number
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, pov;
	ssize_t bytes_written, bytes_read;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_WRONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	fail_file(file_from, file_to, argv);

	bytes_written = 1024;
	while (bytes_written == 1024)
	{
		bytes_written = read(file_from, buf, 1024);
		if (bytes_written == -1)

			fail_file(-1, 0, argv);
		bytes_read = write(file_to, buf, bytes_written);
		if (bytes_read == -1)

			fail_file(0, -1, argv);
	}

	pov = close(file_from);
	if (pov == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	pov = close(file_to);
	if (pov == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
