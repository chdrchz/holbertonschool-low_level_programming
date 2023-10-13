#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array or arguments (string)
 * Return: void
 */
int main(int argc, char *argv[])
{
	int counter, number;
	int sum_Of_Numbers = 0;

	if (argc < 2)
	{
		printf("0");
	}

	for (counter = 1; counter < argc; counter++)
	{
		number = atoi(argv[counter]);
		
		if (number < 0)
		{
			return (1);
		}

		else if (number < 48 && number > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum_Of_Numbers += number;
	}
	printf("%d\n", sum_Of_Numbers);

	return (0);
}
