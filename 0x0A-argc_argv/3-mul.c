#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
int sum = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", sum);
printf("\n");
return (0);
}
