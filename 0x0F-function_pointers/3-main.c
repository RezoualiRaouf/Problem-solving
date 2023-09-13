#include "3-calc.h"
/**
 * main - Entry point of the program
 * @ac: Number of command-line arguments
 * @av: Array of command-line argument strings
 *
 * Return: Always 0 (success)
 */
int main(int ac, char *av[])
{
int a, b, result;
int (*operation)(int, int);

if (ac != 4)
{
	printf("Error\n");
	exit(98);
}
a = atoi(av[1]);
b = atoi(av[3]);
operation = get_op_func(av[2]);
if (operation == NULL)
{
	printf("Error\n");
	exit(99);
}
if ((strcmp(av[2], "/") == 0 || strcmp(av[2], "%") == 0) && b == 0)
{
	printf("Error\n");
	exit(100);
}
result = operation(a, b);
printf("%d\n", result);
return (0);
}
