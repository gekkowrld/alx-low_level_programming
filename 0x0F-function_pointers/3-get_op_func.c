# include "3-calc.h"

/**
 * get_op_func - A function that gets the operator
 * of the calculation that is supposed
 * to be performed
 * @s: The operator to be looked up for
 * on which the calculation will be performed
 * Return: The calculation or null
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
