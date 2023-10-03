#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFERSIZE 1024
int _putchar(char c);
int _sizeof(char *text);
void exit_with_error_int(int code, const char *message, ssize_t arg);
void exit_with_error_char(int code, const char *message, const char *arg);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);










#endif
