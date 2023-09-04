#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - Prints an integer array.
 * @size: The size of the array.
 * @a: The integer array.
 */
void print_array(int size, int *a)
{
int i = 0;

while (i < size)
{
	if (i == 0)
		printf("a[%d] = {", size);
	if (i < size - 1)
		printf("%d ,", a[i]);
	else
		printf("%d", a[i]);
	i++;
	if (i == size)
		printf("};\n");
}
}
/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: An array of strings representing the arguments.
 * Return: 0 if successful, 1 if there's an error.
 */
int main(int ac, char **av)
{
	int *a;
	int asize = 0, i = 0;

if (ac < 2)
{
	printf("Error you need to enter numbers as a Parameters\n");
	printf("Usage %s numbers [NUMBER]\n", av[0]);
	return (1);
}
else
{
	asize = ac - 1;
	a = malloc(sizeof(int) * asize);
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_array(asize, a);
}
return (0);
}
