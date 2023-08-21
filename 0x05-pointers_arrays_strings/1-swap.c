#include "main.h"
/**
 * swap_int - swapa the values of two integers
 * @a: pointer to an integer a
 * @b: pointer to an integer b
 */
void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
