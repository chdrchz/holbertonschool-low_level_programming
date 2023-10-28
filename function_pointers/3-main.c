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
	int num1, num2, result;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fun = get_op_func(argv[2]);

	if ((argv[2][0] == '/' && num2 == 0) ||
                (argv[2][0] == '%' && num2 == 0))
        {
                printf("Error\n");
                return (100);
        }

	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = fun(num1, num2);
	printf("%d\n", result);
	return (0);
}
