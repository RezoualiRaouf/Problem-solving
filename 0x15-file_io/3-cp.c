#include "main.h"
/**
 * exit_with_error_char - Print an error message and exit with a specified code
 * @code: The exit code to use.
 * @message: The error message format string.
 * @arg: The argument to insert into the error message.
 */
void exit_with_error_char(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * exit_with_error_int - Print an error message and exit with a specified code.
 * @code: The exit code to use.
 * @message: The error message format string.
 * @arg: The argument to insert into the error message.
 */
void exit_with_error_int(int code, const char *message, ssize_t arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int ac, char **av)
{
int pt, pt2;
ssize_t by_read, by_write;
char buffer[BUFFERSIZE];

if (ac != 3)
{
	exit_with_error_char(97, "Usage: cp file_from file_to\n", "");
}
pt = open(av[1], O_RDONLY);
if (pt == -1)
{
	exit_with_error_char(98, "Error: Can't read from file %s\n", av[1]);
}
pt2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (pt2 == -1)
{
	exit_with_error_char(99, "Error: Can't write to %s\n", av[2]);
}
while ((by_read = read(pt, buffer, BUFFERSIZE)) > 0)
{
	by_write = write(pt2, buffer, by_read);
	if (by_write == -1)
		exit_with_error_char(99, "Error: Can't write to %s\n", av[2]);
}
if (by_read == -1)
	exit_with_error_char(98, "Error: Can't read from file %s\n", av[1]);

if (close(pt) == -1)
	exit_with_error_int(100, "Error: Can't close fd %d\n", by_read);

if (close(pt2) == -1)
	exit_with_error_int(100, "Error: Can't close fd %d\n", by_write);

return (0);
}
