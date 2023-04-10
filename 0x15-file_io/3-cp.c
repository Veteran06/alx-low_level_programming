#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

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

