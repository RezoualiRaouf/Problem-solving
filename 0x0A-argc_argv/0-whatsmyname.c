#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	printf("\n");
return (0);
}
