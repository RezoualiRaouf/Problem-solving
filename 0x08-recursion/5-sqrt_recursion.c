#include "main.h"
/**
 * _sqrt_recursive - Calculate natural square root using binary search.
 * @n: The number for which to find the square root.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * Return: The natural square root of 'n', or -1 if not found.
 */
int _sqrt_recursive(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
		return (-1);
	mid = low + (high - low) / 2;
	square = mid * mid;
	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_recursive(n, low, mid - 1));
	else
		return (_sqrt_recursive(n, mid + 1, high));
}
/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of 'n', or -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (_sqrt_recursive(n, 0, n));
}
