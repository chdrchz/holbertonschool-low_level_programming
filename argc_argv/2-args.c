#include <stdlib.h>
/**
 * main - prints all arguments passed to it
 * @argc: number of arguments passed
 * @argv: array of strings - unused attribute
 * Return: void
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%d: %s\n", i, argv[counter]);
	}
	return(0);
}
