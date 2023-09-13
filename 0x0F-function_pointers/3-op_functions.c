#include "3-calc.h"
/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
int sum = a + b;

return (sum);
}
/**
 * op_sub - subs two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sub of the two integers.
 */
int op_sub(int a, int b)
{
int sum = a - b;

return (sum);
}
/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The multipliction of the two integers.
 */
int op_mul(int a, int b)
{
int sum = a * b;

return (sum);
}
/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	int sum;

sum = a / b;
return (sum);
}
/**
 * op_mod - Computes the modulus of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The modulus result.
 */
int op_mod(int a, int b)
{
int sum;

sum = a % b;
return (sum);
}
