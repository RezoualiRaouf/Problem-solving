#include "main.h"
/**
 * is_dev - Checks if a number is divisible by any smaller number.
 * @n: The number to be checked.
 * @dev: The divisor to check against.
 *
 * Return: 1 if no smaller divisor found, otherwise 0.
 */
int is_dev(int n, int dev)
{
if (dev >= n && n > 1 && dev > (n / 2))
	return (1);
else if (n % dev == 0 || n <= 1)
	return (0);
else
	return (is_dev(n, dev + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_dev(n, 2));
}
