#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments (unused)
 * @argv: array of arguments (string)
 * Return: void
 */
int main(int argc, char *argv[])
{
	int number_One, number_Two, result_Of_Mult;
	
	if (argc != 3)
        {
        	printf("Error\n");
        	return (1);
        }

	number_One = atoi(argv[1]);
        number_Two = atoi(argv[2]);

        result_Of_Mult = number_One * number_Two;
	
	printf("%d\n", result_Of_Mult);
	
	return (0);
}
