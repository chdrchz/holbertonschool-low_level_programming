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
	int counter, number, sum_Of_Numbers;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (counter = 1; counter < argc; counter++)
	{
		number = atoi(argv[counter]);
		
		if (number < 0)
		{
			return (1);
		}

		if (number < 48 && number > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum_Of_Numbers = sum_Of_Numbers + number;
	}
	printf("%d", sum_Of_Numbers);

	return (0);
}
