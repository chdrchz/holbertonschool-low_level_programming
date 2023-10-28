#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs operations
 * @argc: argument count
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	int num1, num2, result;
	char operand;
	result = 0;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operand = argv[0][2];

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		return (99);
	}
	if (operand != '+') &&
		(operand != '-') &&
		(operand != '*') &&
		(operand != '/') &&
		(operand != '%');
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(operand)(num1, num2));
	return (0);
}
