#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing the name of the file from which it was compiled
 * @argc: name of arguments
 * @argv: number of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	printf("%s\n", __FILE__);

	return (0);
}
