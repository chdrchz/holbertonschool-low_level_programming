#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments (unused)
 * @argv: array of arguments (string)
 * Return: void
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int number_One = atoi(argv[1]);
	int number_Two = atoi(argv[2]);

	int result_Of_Mult = number_One * number_Two;

	printf("%d\n", result_Of_Mult);
	
	return (0);
}
