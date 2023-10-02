#include "main.h"
/**
 * read_textfile - Reads and prints the content of a text file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read and print.
 *
 * Return: The number of bytes read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
char *pt;
ssize_t printed;

	if (filename == NULL)
		exit(0);
	pt = malloc(letters);
	if (pt == NULL)
		exit(0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(pt);
		exit(0);
	}

	printed = read(fp, pt, letters);
	if (printed  == -1)
	{
		free(pt);
		close(fp);
		exit(0);
	}
	if (write(STDOUT_FILENO, pt, printed) == -1)
	{
		free(pt);
		close(fp);
		exit(0);
	}
free(pt);
close(fp);
return (printed);
}
