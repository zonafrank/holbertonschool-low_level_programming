#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer that selects desired function for
 * the requested operation
 * @s: pointer to char which representes the desired operation
 * @a: first operand for the operation
 * @b: second operand for the operation
 * Return: pointer to a function which will execute the desired operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
