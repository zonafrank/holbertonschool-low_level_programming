#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#define EXPECTED_ARGS 4

int main(int argc, char *argv[])
{
	int v1, v2, res;
	char *operation;

	if (argc != EXPECTED_ARGS)
	{
		printf("Error\n");
		return (98);
	}

	v1 = atoi(argv[1]);
	operation = argv[2];
	v2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*operation == '/' || *operation == '%') && v2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = get_op_func(operation)(v1, v2);
	printf("%i\n", res);
	return (0);
}