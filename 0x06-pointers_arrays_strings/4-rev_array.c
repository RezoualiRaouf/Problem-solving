#include <stdlib.h>
#include "main.h"
/**
 * reverse_array - revereses an array of integers
 *@a: pointes to thr array of inegers
 *@n: the size of the array
 */

void reverse_array(int *a, int n)
{
int rev, i;

for (i = 0 ; i < n / 2 ; i++)
{
	rev = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = rev;
}
}
