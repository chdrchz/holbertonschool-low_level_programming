#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: # of arguments
 * @argv: array of arguments (strings)
 * Return: void
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%d: %s\n", counter, argv[counter]);
	}
	return (0);
}
