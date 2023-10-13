#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter <= argc; counter++)
	{
		printf("%s", argv[counter]);
	}
	printf("\n");

	return (0);
}
