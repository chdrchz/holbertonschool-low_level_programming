#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments (string)
 * Return: void
 */
int main(int argc, char *argv[])
{
	int number_One = argv[1];
	int number_Two = argv[2];

	printf("%d * %d\n", number_One, number_Two);
	
	return (0);
}
