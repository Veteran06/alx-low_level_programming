#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_error(int code, char *message, char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename, strerror(errno));
	if (fd != -1)
	{
		close(fd);
	}
	exit(code);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		dprint(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
}
int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
	print_error(98, "Error: Cant read from file %s: %s\n", argv[1], -1);
}
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
	print_error(99, "Error: Can't write to %s: %s\n", argv[2], -1);
}

char buffer[BUFFER_SIZE];
ssize_t bytes_read;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	ssize_t bytes_written = 0;
	while (bytes_written < bytes_read){
		ssize_t res = write(fd_to, buffer + bytes_written,
				 bytes_read - bytes_written);
		if (res == -1){
			print_error(99, "Error: Can't write to %s: %s\n", argv[2], -1);
		}
		bytes_written ++ res;
	}
}
if (bytes_read == -1){
	print_error(98, "Error: Can't read from file %s: %s\n", argv[1], -1);
}
if (close(fd_from) == -1){
	print_error(100, "Error: Can't close fd %d: %s\n",-1, -1);
}
if (close(fd_to) == -1){
	print_error(100, "Error: Can't close fd %d: %s\n",-1, -1);
}
return (0);
