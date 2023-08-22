#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

for (i = 0 ; i < n ; i++)
{
	printf("%d", *a);
	if (i < n - 1)
		printf(", ");
	a++;
}
printf("\n");
}
