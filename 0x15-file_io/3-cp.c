#include "main.h"
/**
 * _sizeof - Computes the length of a string.
 * @text: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _sizeof(char *text)
{
int i = 0;

while (text[i] != '\0')
	i++;
return (i);
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
int pt, pt2, bread, bwrite;
char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	pt = open(av[1], O_RDONLY);
	if (pt == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	bread = read(pt, buffer, 1024);
	if (bread == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	pt2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (pt2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	bwrite = write(pt2, buffer, _sizeof(buffer));
	if (bwrite == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	if (close(pt) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pt);
	exit(100);
	}
	if (close(pt2) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pt2);
	exit(100);
	}
return (0);
}
