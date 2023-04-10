#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void fail_file(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);

#endif
