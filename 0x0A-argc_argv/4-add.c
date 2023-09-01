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
int sum = 0, i, tst = 0;

if (argc == 1)
	printf("0\n");
else
{
	for (i = 1 ; i < argc ; i++)
	{
		tst = atoi(argv[i]);
		if (tst >= 1)
		{
			sum += tst;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
}
return (0);
}
