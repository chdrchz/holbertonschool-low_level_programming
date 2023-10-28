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
	int num1, num2, operand;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operand = atoi(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func((char *)operand) == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if (operand == '/' && num2 == 0) ||
		(operand == '%' && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(operand)(num1, num2));
	return (0);
}
