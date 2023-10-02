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
ssize_t bwritten, bread;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(pt);
		return (0);
	}

	pt = malloc(letters);
	if (pt == NULL)
	{
		close(fp);
		return (0);
	}

	bread = read(fp, pt, letters);
	if (bread  == -1)
	{
		free(pt);
		close(fp);
		return (0);
	}

	bwritten = write(STDOUT_FILENO, pt, bread);
	if (bwritten  == -1 || bwritten != bread)
	{
		free(pt);
		close(fp);
		return (0);
	}
free(pt);
close(fp);
return (bread);
}
