#include "3-calc.h"
/**
 * get_op_func - Returns a function pointer based on an operator string.
 * @s: The operator string.
 *
 * Return: A pointer to the corresponding function or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;

	i = 0;
while (ops[i].op)
{
	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	i++;
}
return (NULL);
}
