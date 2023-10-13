#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing number of arguments
 * @argc: size of argv
 * @argv: array of strings
 * Return: void
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%d", argv[counter]);
	}
	printf("\n");

	return (0);
}
